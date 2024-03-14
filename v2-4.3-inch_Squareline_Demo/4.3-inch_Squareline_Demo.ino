#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

// const char *ssid = "shsopf";
// const char *password = "prayer@821";

const char *ssid = "MAHAKAL";
const char *password = "sateri456";

int counter = 99;
int invcounter = 0;
String sheetNames[10]; // Assuming a maximum of 10 sheet names
String privsheetNames[10]; // Assuming a maximum of 10 sheet names
int numSheetNames = 0;
int privnumSheetNames = 0;

int itemCounter = 0;
int sheetCounter = 0;
int privsheetCounter = 0;

int Xaxis = 0;
int Yaxis = 0;

String viewSheet = "Second";

#include <Wire.h>
#include <SPI.h>

#define USE_UI    //if you want to use the ui export from Squareline, please do not annotate this line.

#if defined USE_UI
#include <lvgl.h>
#include "ui.h"
#include <examples/lv_examples.h>

// #include <examples/styles/lv_example_style.h>
// #include <examples/get_started/lv_example_get_started.h>
// #include <examples/widgets/lv_example_widgets.h>
// #include <examples/layouts/lv_example_layout.h>
// #include <examples/scroll/lv_example_scroll.h>
// #include <examples/anim/lv_example_anim.h>
// #include <examples/event/lv_example_event.h>
// #include <examples/styles/lv_example_style.h>
// #include <examples/others/lv_example_others.h>
// #include <examples/libs/lv_example_libs.h>

#endif

#include <Arduino_GFX_Library.h>
#define TFT_BL 2
#define GFX_BL DF_GFX_BL // default backlight pin, you may replace DF_GFX_BL to actual backlight pin

/******Please define a corresponding line based on your development board.************/
#define Display_43
//#define Display_50
//#define Display_70
/*******************************************************************************
 * Screen Driver Configuration 
*******************************************************************************/
#if defined (Display_43)         //4.3INCH 480x272
Arduino_ESP32RGBPanel *bus = new Arduino_ESP32RGBPanel(
  GFX_NOT_DEFINED /* CS */, GFX_NOT_DEFINED /* SCK */, GFX_NOT_DEFINED /* SDA */,
  40 /* DE */, 41 /* VSYNC */, 39 /* HSYNC */, 42 /* PCLK */,
  45 /* R0 */, 48 /* R1 */, 47 /* R2 */, 21 /* R3 */, 14 /* R4 */,
  5 /* G0 */, 6 /* G1 */, 7 /* G2 */, 15 /* G3 */, 16 /* G4 */, 4 /* G5 */,
  8 /* B0 */, 3 /* B1 */, 46 /* B2 */, 9 /* B3 */, 1 /* B4 */
);
Arduino_RPi_DPI_RGBPanel *lcd = new Arduino_RPi_DPI_RGBPanel(
  bus,
  480 /* width */, 0 /* hsync_polarity */, 8 /* hsync_front_porch */, 4 /* hsync_pulse_width */, 43 /* hsync_back_porch */,
  272 /* height */, 0 /* vsync_polarity */, 8 /* vsync_front_porch */, 4 /* vsync_pulse_width */, 12 /* vsync_back_porch */,
  1 /* pclk_active_neg */, 7000000 /* prefer_speed */, true /* auto_flush */);
  
#elif defined (Display_50)         //5.0INCH 800x480
Arduino_ESP32RGBPanel *bus = new Arduino_ESP32RGBPanel(
  GFX_NOT_DEFINED /* CS */, GFX_NOT_DEFINED /* SCK */, GFX_NOT_DEFINED /* SDA */,
  40 /* DE */, 41 /* VSYNC */, 39 /* HSYNC */, 0 /* PCLK */,
  45 /* R0 */, 48 /* R1 */, 47 /* R2 */, 21 /* R3 */, 14 /* R4 */,
  5 /* G0 */, 6 /* G1 */, 7 /* G2 */, 15 /* G3 */, 16 /* G4 */, 4 /* G5 */,
  8 /* B0 */, 3 /* B1 */, 46 /* B2 */, 9 /* B3 */, 1 /* B4 */
);
Arduino_RPi_DPI_RGBPanel *lcd = new Arduino_RPi_DPI_RGBPanel(
  bus,
  800 /* width */, 0 /* hsync_polarity */, 210 /* hsync_front_porch */, 4 /* hsync_pulse_width */, 43 /* hsync_back_porch */,
  480 /* height */, 0 /* vsync_polarity */, 22 /* vsync_front_porch */, 4 /* vsync_pulse_width */, 12 /* vsync_back_porch */,
  1 /* pclk_active_neg */, 16000000 /* prefer_speed */, true /* auto_flush */);
  
#elif defined (Display_70)       //7.0INCH 800x480
Arduino_ESP32RGBPanel *bus = new Arduino_ESP32RGBPanel(
  GFX_NOT_DEFINED /* CS */, GFX_NOT_DEFINED /* SCK */, GFX_NOT_DEFINED /* SDA */,
  41 /* DE */, 40 /* VSYNC */, 39 /* HSYNC */, 0 /* PCLK */,
  14 /* R0 */, 21 /* R1 */, 47 /* R2 */, 48 /* R3 */, 45 /* R4 */,
  9 /* G0 */, 46 /* G1 */, 3 /* G2 */, 8 /* G3 */, 16 /* G4 */, 1 /* G5 */,
  15 /* B0 */, 7 /* B1 */, 6 /* B2 */, 5 /* B3 */, 4 /* B4 */
);
Arduino_RPi_DPI_RGBPanel *lcd = new Arduino_RPi_DPI_RGBPanel(
  bus,
  800 /* width */, 0 /* hsync_polarity */, 210 /* hsync_front_porch */, 1 /* hsync_pulse_width */, 46 /* hsync_back_porch */,
  480 /* height */, 0 /* vsync_polarity */, 22 /* vsync_front_porch */, 1 /* vsync_pulse_width */, 23 /* vsync_back_porch */,
  0 /* pclk_active_neg */, 16000000 /* prefer_speed */, true /* auto_flush */);
#endif

/*******************************************************************************
 * Screen Driver Configuration  end
*******************************************************************************/


/*******************************************************************************
   Please config the touch panel in touch.h
 ******************************************************************************/
#include "touch.h"

#ifdef USE_UI
/* Change to your screen resolution */
static uint32_t screenWidth;
static uint32_t screenHeight;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t disp_draw_buf[480 * 272 / 10];      //5,7inch: lv_color_t disp_draw_buf[800*480/10]            4.3inch: lv_color_t disp_draw_buf[480*272/10]
//static lv_color_t disp_draw_buf;
static lv_disp_drv_t disp_drv;

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

#if (LV_COLOR_16_SWAP != 0)
  lcd->draw16bitBeRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#else
  lcd->draw16bitRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#endif

  lv_disp_flush_ready(disp);
}

void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
  if (touch_has_signal())
  {
    if (touch_touched())
    {
      data->state = LV_INDEV_STATE_PR;

      /*Set the coordinates*/
      data->point.x = touch_last_x;
      data->point.y = touch_last_y;
      Serial.print( "Data x :" );Serial.print( touch_last_x );

      Serial.print( " --- Data y :" );Serial.println( touch_last_y );

      Xaxis = touch_last_x;
      Yaxis = touch_last_y;
    }
    else if (touch_released())
    {
      data->state = LV_INDEV_STATE_REL;
    }
  }
  else
  {
    data->state = LV_INDEV_STATE_REL;
  }
  delay(15);
}
#endif

String getTeacherData(const char *sheetName) {
  // String url = "https://720c3c79-4546-4164-96d8-86f0c81a7552-00-pwklnqvuc2w4.kirk.replit.dev/fetchtt/?teacher_name=" + String(teacherName);
  String url = "https://8649e09f-d977-4a7a-b90e-dc833304ef8a-00-20hj2r0n7o64a.pike.replit.dev/getdata/" + String(sheetName);
  HTTPClient http;

  // Serial.print("Sending GET request to: ");
  // Serial.println(url);

  if (http.begin(url)) {
    int httpCode = http.GET();

    if (httpCode > 0) {
      if (httpCode == HTTP_CODE_OK) {
        // Parse JSON response
        DynamicJsonDocument doc(1024); // Adjust the size based on your JSON response
        DeserializationError error = deserializeJson(doc, http.getString());

        if (error) {
          Serial.print("JSON parsing error: ");
          Serial.println(error.c_str());
        } else {
          // Convert JSON to a String
          String jsonData;
          serializeJson(doc, jsonData);
          return jsonData;
        }
      } else {
        Serial.print("HTTP request failed with error code: ");
        Serial.println(httpCode);
      }
    } else {
      Serial.println("Unable to connect to the server");
    }

    http.end(); // Close connection
  } else {
    Serial.println("Failed to initialize HTTP client");
  }

  // Return an empty string if the request fails
  return "";
}


void setup()
{
  Serial.begin(115200);
  Serial.println("LVGL Widgets TeacherSpace Started !!!");

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("Connected to WiFi");


#if defined(Display_50) || defined(Display_70)
  //IO Port Pins
  pinMode(38, OUTPUT);
  digitalWrite(38, LOW);
  pinMode(17, OUTPUT);
  digitalWrite(17, LOW);
  pinMode(18, OUTPUT);
  digitalWrite(18, LOW);
  pinMode(42, OUTPUT);
  digitalWrite(42, LOW);
#elif defined(Display_43)
  pinMode(20, OUTPUT);
  digitalWrite(20, LOW);
  pinMode(19, OUTPUT);
  digitalWrite(19, LOW);
  pinMode(35, OUTPUT);
  digitalWrite(35, LOW);
  pinMode(38, OUTPUT);
  digitalWrite(38, LOW);
  pinMode(0, OUTPUT);//TOUCH-CS
#endif

  // Init Display
  lcd->begin();
  lcd->fillScreen(BLACK);
  lcd->setTextSize(2);
  delay(200);
  
#ifdef USE_UI
  lv_init();

  delay(100);
  touch_init();

  screenWidth = lcd->width();
  screenHeight = lcd->height();

  lv_disp_draw_buf_init(&draw_buf, disp_draw_buf, NULL, screenWidth * screenHeight / 10);
  //  lv_disp_draw_buf_init(&draw_buf, disp_draw_buf, NULL, 480 * 272 / 10);
  /* Initialize the display */
  lv_disp_drv_init(&disp_drv);
  /* Change the following line to your display resolution */
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  /* Initialize the (dummy) input device driver */
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);
#endif
  
#ifdef TFT_BL
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH);
#endif

#ifdef USE_UI
  ui_init();//ui from Squareline or GUI Guider
#else
  lcd->fillScreen(RED);
  delay(800);
  lcd->fillScreen(BLUE);
  delay(800);
  lcd->fillScreen(YELLOW);
  delay(800);
  lcd->fillScreen(GREEN);
  delay(800);
#endif

  Serial.println( "Setup done" );

  // Get data for simplett sheet names
  String allTeacherData = getTeacherData("simplett"); // Assuming getTeacherData() function is defined elsewhere
  if (!allTeacherData.isEmpty()) {
    Serial.println("Got Data");

    // Parse JSON data
    DynamicJsonDocument doc(1024);
    DeserializationError error = deserializeJson(doc, allTeacherData);

    // Retrieve sheet names from JSON data
    JsonArray sheetNamesJson = doc["sheetnames"];
    numSheetNames = sheetNamesJson.size(); // Update the number of sheet names based on the data

    // Store sheet names in the array
    for (int i = 0; i < numSheetNames; i++) {
      sheetNames[i] = sheetNamesJson[i].as<String>();
      Serial.println(sheetNames[i]);
    }
  }



  // Get data for privatett all sheet names
  String PrivSheetName = getTeacherData("privatett"); // Assuming getTeacherData() function is defined elsewhere
  if (!PrivSheetName.isEmpty()) {
    Serial.println("Got Data");

    // Parse JSON data
    DynamicJsonDocument doc(1024);
    DeserializationError error = deserializeJson(doc, PrivSheetName);
    // Retrieve sheet names from JSON data
    JsonArray sheetNamesJson = doc["sheetnames"];
    privnumSheetNames = sheetNamesJson.size(); // Update the number of sheet names based on the data

    // Store sheet names in the array
    for (int i = 0; i < privnumSheetNames; i++) {
      privsheetNames[i] = sheetNamesJson[i].as<String>();
      Serial.println(privsheetNames[i]);
    }
  }


}
      
      
      // lv_example_event_1(); // Call the example function to create the button


/**
 * Basic example to create a "Hello world" label
 */


void loop()
{
  while(1)
  {
#ifdef USE_UI
    lv_timer_handler();


    // updatesubjects();

    // Set time
    // updatesubjects(ui_Label8,  "10-11");
    // updatesubjects(ui_Label10, "11-12");
    // updatesubjects(ui_Label12, "12-1");
    // updatesubjects(ui_Label11, "2-3");
    // updatesubjects(ui_Label13, "3-4");
    // updatesubjects(ui_Label14, "5-6");

  if (Xaxis >= 410 && Xaxis <= 455 && Yaxis >= 25 && Yaxis <= 48) {
    Serial.println("Button Pressed");
    Xaxis = 0;
    Yaxis = 0;
    if (sheetCounter != numSheetNames) {sheetCounter++;}
    if (sheetCounter == numSheetNames) {sheetCounter = 0;}
    viewSheet = sheetNames[sheetCounter].c_str();
    delay(100);
  }

  // int numSheetNames = 0;
  // int privnumSheetNames = 0;

  if (Xaxis >= 415 && Xaxis <= 450 && Yaxis >= 207 && Yaxis <= 232) {
    Serial.println("Private Button Pressed");
    Xaxis = 0;
    Yaxis = 0;
    if (privsheetCounter != privnumSheetNames) {privsheetCounter++;}
    if (privsheetCounter == privnumSheetNames) {privsheetCounter = 0;}

    viewSheet = privsheetNames[privsheetCounter].c_str();

    delay(100);
  }


  // counter++;
  // Serial.println(".");
  // invcounter = 100 - counter; 
  // updatesubjects(ui_countText,  String(invcounter).c_str());
  updatesubjects(ui_countText,  "Next TT");

  // print(button_event_cb(ui_nextBtn));


  // Check if counter is 100
  // if (counter == 100) {
    // Serial.println("Make api call");
    // Reset counter
    // counter = 0;
    // if (itemCounter != numSheetNames) {itemCounter++;}
    // if (itemCounter == numSheetNames) {itemCounter = 0;}

    // Access each sheet name one by one
      // String teacherData = getTeacherData(sheetNames[itemCounter]);
      // Serial.print("Sheet names");Serial.println(sheetNames[itemCounter].c_str());




      String teacherData = getTeacherData(viewSheet.c_str());
      // Example: Get data for the teacher "Shaun"
      // char* teacher=getteacher();
      // String teacherData = getTeacherData("Second"); //username only


      if (!teacherData.isEmpty()) {
        Serial.println("Got Data");

        // Parse JSON data
        DynamicJsonDocument doc(1024);
        DeserializationError error = deserializeJson(doc, teacherData);

        if (error) {
          Serial.print("JSON parsing error: ");
          Serial.println(error.c_str());
        } else {
          // Access the "Class A" value
          // String classA = doc["FRI"][0]["subject"];
          // Serial.println("Class A: " + classA);

          updatesubjects(ui_yearName,       doc["sheetname"]);


          updatesubjects(ui_teacher1name,   doc["Teachers"][0]);
          updatesubjects(ui_teacher2name,   doc["Teachers"][1]);

          updatesubjects(ui_className,      doc["myclass"][0]);
          updatesubjects(ui_Label1,         doc["myclass"][1]);


          // Row 1
          updatesubjects(ui_textR1C1,  doc["MON"][0]["subject"]);
          updatesubjects(ui_textR1C2,  doc["MON"][1]["subject"]);
          updatesubjects(ui_textR1C3,  doc["MON"][2]["subject"]);
          updatesubjects(ui_textR1C4,  doc["MON"][3]["subject"]);
          updatesubjects(ui_textR1C5,  doc["MON"][4]["subject"]);
          updatesubjects(ui_textR1C6,  doc["MON"][5]["subject"]);
          updatesubjects(ui_textR1C7,  doc["MON"][6]["subject"]);

          // Row 2
          updatesubjects(ui_textR2C1,  doc["TUE"][0]["subject"]);
          updatesubjects(ui_textR2C2,  doc["TUE"][1]["subject"]);
          updatesubjects(ui_textR2C3,  doc["TUE"][2]["subject"]);
          updatesubjects(ui_textR2C4,  doc["TUE"][3]["subject"]);
          updatesubjects(ui_textR2C5,  doc["TUE"][4]["subject"]);
          updatesubjects(ui_textR2C6,  doc["TUE"][5]["subject"]);
          updatesubjects(ui_textR2C7,  doc["TUE"][6]["subject"]);

          // Row 3
          updatesubjects(ui_textR3C1,  doc["WED"][0]["subject"]);
          updatesubjects(ui_textR3C2,  doc["WED"][1]["subject"]);
          updatesubjects(ui_textR3C3,  doc["WED"][2]["subject"]);
          updatesubjects(ui_textR3C4,  doc["WED"][3]["subject"]);
          updatesubjects(ui_textR3C5,  doc["WED"][4]["subject"]);
          updatesubjects(ui_textR3C6,  doc["WED"][5]["subject"]);
          updatesubjects(ui_textR3C7,  doc["WED"][6]["subject"]);
          
          // Row 4
          updatesubjects(ui_textR4C1,  doc["THU"][0]["subject"]);
          updatesubjects(ui_textR4C2,  doc["THU"][1]["subject"]);
          updatesubjects(ui_textR4C3,  doc["THU"][2]["subject"]);
          updatesubjects(ui_textR4C4,  doc["THU"][3]["subject"]);
          updatesubjects(ui_textR4C5,  doc["THU"][4]["subject"]);
          updatesubjects(ui_textR4C6,  doc["THU"][5]["subject"]);
          updatesubjects(ui_textR4C7,  doc["THU"][6]["subject"]);

          // Row 5
          updatesubjects(ui_textR5C1,  doc["FRI"][0]["subject"]);
          updatesubjects(ui_textR5C2,  doc["FRI"][1]["subject"]);
          updatesubjects(ui_textR5C3,  doc["FRI"][2]["subject"]);
          updatesubjects(ui_textR5C4,  doc["FRI"][3]["subject"]);
          updatesubjects(ui_textR5C5,  doc["FRI"][4]["subject"]);
          updatesubjects(ui_textR5C6,  doc["FRI"][5]["subject"]);
          updatesubjects(ui_textR5C7,  doc["FRI"][6]["subject"]);






          // // Set Day
          // updatesubjects(ui_Label29, doc["day"]);

          // // Set Date
          // updatesubjects(ui_Label25, doc["formattedTime"]);

          


          // // Set time
          // updatesubjects(ui_Label8,  doc["time"][0]);
          // updatesubjects(ui_Label10, doc["time"][1]);
          // updatesubjects(ui_Label12, doc["time"][2]);
          // updatesubjects(ui_Label11, doc["time"][3]);
          // updatesubjects(ui_Label13, doc["time"][4]);
          // updatesubjects(ui_Label14, doc["time"][5]);


          // // Set Subject
          // updatesubjects(ui_Label5, doc["subjects"][0]);
          // updatesubjects(ui_Label1, doc["subjects"][1]);
          // updatesubjects(ui_Label3, doc["subjects"][2]);
          // updatesubjects(ui_Label2, doc["subjects"][3]);
          // updatesubjects(ui_Label6, doc["subjects"][4]);
          // updatesubjects(ui_Label4, doc["subjects"][5]);

          // // Set Classes
          // updatesubjects(ui_Label7,  doc["classes"][0]);
          // updatesubjects(ui_Label16, doc["classes"][1]);
          // updatesubjects(ui_Label15, doc["classes"][2]);
          // updatesubjects(ui_Label17, doc["classes"][3]);
          // updatesubjects(ui_Label18, doc["classes"][4]); vivatechnology.guide
          // updatesubjects(ui_Label19, doc["classes"][5]); hareshpawaskar1998@gmail.com Viva@111



  // }


    delay(5);
        }
      }
  }
#endif
}

