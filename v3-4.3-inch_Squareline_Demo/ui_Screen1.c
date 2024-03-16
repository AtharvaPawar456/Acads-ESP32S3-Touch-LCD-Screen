// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_yearName = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_yearName, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_yearName, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_yearName, -69);
    lv_obj_set_y(ui_yearName, -124);
    lv_obj_set_align(ui_yearName, LV_ALIGN_CENTER);
    lv_label_set_text(ui_yearName, "SECOND");
    lv_obj_set_style_text_font(ui_yearName, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label18 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label18, -193);
    lv_obj_set_y(ui_Label18, -128);
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "Class Room");
    lv_obj_set_style_text_font(ui_Label18, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_className = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_className, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_className, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_className, -195);
    lv_obj_set_y(ui_className, -113);
    lv_obj_set_align(ui_className, LV_ALIGN_CENTER);
    lv_label_set_text(ui_className, "B 105");
    lv_obj_set_style_text_font(ui_className, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel1, 472);
    lv_obj_set_height(ui_Panel1, 217);
    lv_obj_set_x(ui_Panel1, 0);
    lv_obj_set_y(ui_Panel1, 12);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label4 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -219);
    lv_obj_set_y(ui_Label4, -85);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "Time\nDay");
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Label4, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Label4, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, -165);
    lv_obj_set_y(ui_Label5, -85);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "8:45 am\n9:45 am");
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Label5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Label5, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Label5, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, -102);
    lv_obj_set_y(ui_Label6, -86);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "9:45 am\n10:45 am");
    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Label6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Label6, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Label6, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, -40);
    lv_obj_set_y(ui_Label7, -86);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "11:00 am\n12:00 am");
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Label7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Label7, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Label7, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, 29);
    lv_obj_set_y(ui_Label8, -86);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "12:00 pm\n1:00 pm");
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Label8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Label8, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Label8, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label9, 88);
    lv_obj_set_y(ui_Label9, -86);
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "1:30 pm\n2:30 pm");
    lv_obj_set_style_text_font(ui_Label9, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Label9, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Label9, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Label9, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label10, 146);
    lv_obj_set_y(ui_Label10, -85);
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "2:30 pm\n3:30 pm");
    lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Label10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Label10, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Label10, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label11 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label11, 202);
    lv_obj_set_y(ui_Label11, -86);
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "3:30 pm\n4:30 pm");
    lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Label11, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Label11, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Label11, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label12 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label12, -220);
    lv_obj_set_y(ui_Label12, -53);
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, "Mon");
    lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR3C1 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR3C1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR3C1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR3C1, -166);
    lv_obj_set_y(ui_textR3C1, 6);
    lv_obj_set_align(ui_textR3C1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR3C1, "EACM-I");
    lv_obj_set_style_text_font(ui_textR3C1, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label13, -219);
    lv_obj_set_y(ui_Label13, -25);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "Tue");
    lv_obj_set_style_text_font(ui_Label13, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label14, -222);
    lv_obj_set_y(ui_Label14, 4);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "Wed");
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label15, -221);
    lv_obj_set_y(ui_Label15, 35);
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "Thu");
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label16 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label16, -218);
    lv_obj_set_y(ui_Label16, 63);
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, "Fri");
    lv_obj_set_style_text_font(ui_Label16, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR1C1 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR1C1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR1C1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR1C1, -166);
    lv_obj_set_y(ui_textR1C1, -53);
    lv_obj_set_align(ui_textR1C1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR1C1, "B1 MCA L / B2");
    lv_obj_set_style_text_font(ui_textR1C1, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR2C1 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR2C1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR2C1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR2C1, -166);
    lv_obj_set_y(ui_textR2C1, -24);
    lv_obj_set_align(ui_textR2C1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR2C1, "EACM-I");
    lv_obj_set_style_text_font(ui_textR2C1, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR4C1 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR4C1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR4C1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR4C1, -166);
    lv_obj_set_y(ui_textR4C1, 36);
    lv_obj_set_align(ui_textR4C1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR4C1, "EACM-I");
    lv_obj_set_style_text_font(ui_textR4C1, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR5C1 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR5C1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR5C1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR5C1, -166);
    lv_obj_set_y(ui_textR5C1, 65);
    lv_obj_set_align(ui_textR5C1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR5C1, "EACM-I");
    lv_obj_set_style_text_font(ui_textR5C1, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR1C2 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR1C2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR1C2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR1C2, -102);
    lv_obj_set_y(ui_textR1C2, -53);
    lv_obj_set_align(ui_textR1C2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR1C2, "CSD  / B3 PSPS L");
    lv_obj_set_style_text_font(ui_textR1C2, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR2C2 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR2C2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR2C2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR2C2, -102);
    lv_obj_set_y(ui_textR2C2, -23);
    lv_obj_set_align(ui_textR2C2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR2C2, "EACM-I");
    lv_obj_set_style_text_font(ui_textR2C2, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR3C2 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR3C2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR3C2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR3C2, -102);
    lv_obj_set_y(ui_textR3C2, 6);
    lv_obj_set_align(ui_textR3C2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR3C2, "EACM-I");
    lv_obj_set_style_text_font(ui_textR3C2, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR4C2 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR4C2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR4C2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR4C2, -102);
    lv_obj_set_y(ui_textR4C2, 35);
    lv_obj_set_align(ui_textR4C2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR4C2, "EACM-I");
    lv_obj_set_style_text_font(ui_textR4C2, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR5C2 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR5C2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR5C2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR5C2, -102);
    lv_obj_set_y(ui_textR5C2, 65);
    lv_obj_set_align(ui_textR5C2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR5C2, "EACM-I");
    lv_obj_set_style_text_font(ui_textR5C2, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR1C3 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR1C3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR1C3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR1C3, -39);
    lv_obj_set_y(ui_textR1C3, -52);
    lv_obj_set_align(ui_textR1C3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR1C3, "EACM-I");
    lv_obj_set_style_text_font(ui_textR1C3, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR2C3 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR2C3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR2C3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR2C3, -39);
    lv_obj_set_y(ui_textR2C3, -23);
    lv_obj_set_align(ui_textR2C3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR2C3, "EACM-I");
    lv_obj_set_style_text_font(ui_textR2C3, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR3C3 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR3C3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR3C3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR3C3, -39);
    lv_obj_set_y(ui_textR3C3, 7);
    lv_obj_set_align(ui_textR3C3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR3C3, "EACM-I");
    lv_obj_set_style_text_font(ui_textR3C3, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR4C3 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR4C3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR4C3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR4C3, -39);
    lv_obj_set_y(ui_textR4C3, 35);
    lv_obj_set_align(ui_textR4C3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR4C3, "EACM-I");
    lv_obj_set_style_text_font(ui_textR4C3, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR5C3 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR5C3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR5C3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR5C3, -40);
    lv_obj_set_y(ui_textR5C3, 66);
    lv_obj_set_align(ui_textR5C3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR5C3, "EACM-I");
    lv_obj_set_style_text_font(ui_textR5C3, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR1C4 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR1C4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR1C4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR1C4, 29);
    lv_obj_set_y(ui_textR1C4, -51);
    lv_obj_set_align(ui_textR1C4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR1C4, "EACM-I");
    lv_obj_set_style_text_font(ui_textR1C4, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR2C4 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR2C4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR2C4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR2C4, 28);
    lv_obj_set_y(ui_textR2C4, -23);
    lv_obj_set_align(ui_textR2C4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR2C4, "EACM-I");
    lv_obj_set_style_text_font(ui_textR2C4, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR3C4 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR3C4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR3C4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR3C4, 28);
    lv_obj_set_y(ui_textR3C4, 6);
    lv_obj_set_align(ui_textR3C4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR3C4, "EACM-I");
    lv_obj_set_style_text_font(ui_textR3C4, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR4C4 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR4C4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR4C4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR4C4, 28);
    lv_obj_set_y(ui_textR4C4, 33);
    lv_obj_set_align(ui_textR4C4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR4C4, "EACM-I");
    lv_obj_set_style_text_font(ui_textR4C4, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR5C4 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR5C4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR5C4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR5C4, 28);
    lv_obj_set_y(ui_textR5C4, 67);
    lv_obj_set_align(ui_textR5C4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR5C4, "EACM-I");
    lv_obj_set_style_text_font(ui_textR5C4, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR1C5 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR1C5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR1C5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR1C5, 87);
    lv_obj_set_y(ui_textR1C5, -52);
    lv_obj_set_align(ui_textR1C5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR1C5, "EACM-I");
    lv_obj_set_style_text_font(ui_textR1C5, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR2C5 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR2C5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR2C5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR2C5, 87);
    lv_obj_set_y(ui_textR2C5, -23);
    lv_obj_set_align(ui_textR2C5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR2C5, "EACM-I");
    lv_obj_set_style_text_font(ui_textR2C5, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR3C5 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR3C5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR3C5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR3C5, 87);
    lv_obj_set_y(ui_textR3C5, 7);
    lv_obj_set_align(ui_textR3C5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR3C5, "EACM-I");
    lv_obj_set_style_text_font(ui_textR3C5, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR4C5 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR4C5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR4C5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR4C5, 87);
    lv_obj_set_y(ui_textR4C5, 34);
    lv_obj_set_align(ui_textR4C5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR4C5, "EACM-I");
    lv_obj_set_style_text_font(ui_textR4C5, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR5C5 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR5C5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR5C5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR5C5, 87);
    lv_obj_set_y(ui_textR5C5, 67);
    lv_obj_set_align(ui_textR5C5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR5C5, "EACM-I");
    lv_obj_set_style_text_font(ui_textR5C5, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR1C6 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR1C6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR1C6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR1C6, 146);
    lv_obj_set_y(ui_textR1C6, -52);
    lv_obj_set_align(ui_textR1C6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR1C6, "EACM-I");
    lv_obj_set_style_text_font(ui_textR1C6, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR2C6 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR2C6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR2C6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR2C6, 145);
    lv_obj_set_y(ui_textR2C6, -24);
    lv_obj_set_align(ui_textR2C6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR2C6, "EACM-I");
    lv_obj_set_style_text_font(ui_textR2C6, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR3C6 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR3C6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR3C6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR3C6, 145);
    lv_obj_set_y(ui_textR3C6, 7);
    lv_obj_set_align(ui_textR3C6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR3C6, "EACM-I");
    lv_obj_set_style_text_font(ui_textR3C6, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR4C6 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR4C6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR4C6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR4C6, 145);
    lv_obj_set_y(ui_textR4C6, 35);
    lv_obj_set_align(ui_textR4C6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR4C6, "EACM-I");
    lv_obj_set_style_text_font(ui_textR4C6, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR5C6 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR5C6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR5C6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR5C6, 145);
    lv_obj_set_y(ui_textR5C6, 66);
    lv_obj_set_align(ui_textR5C6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR5C6, "EACM-I");
    lv_obj_set_style_text_font(ui_textR5C6, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR1C7 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR1C7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR1C7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR1C7, 201);
    lv_obj_set_y(ui_textR1C7, -53);
    lv_obj_set_align(ui_textR1C7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR1C7, "EACM-I");
    lv_obj_set_style_text_font(ui_textR1C7, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR2C7 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR2C7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR2C7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR2C7, 200);
    lv_obj_set_y(ui_textR2C7, -24);
    lv_obj_set_align(ui_textR2C7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR2C7, "EACM-I");
    lv_obj_set_style_text_font(ui_textR2C7, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR3C7 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR3C7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR3C7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR3C7, 200);
    lv_obj_set_y(ui_textR3C7, 8);
    lv_obj_set_align(ui_textR3C7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR3C7, "EACM-I");
    lv_obj_set_style_text_font(ui_textR3C7, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR4C7 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR4C7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR4C7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR4C7, 200);
    lv_obj_set_y(ui_textR4C7, 35);
    lv_obj_set_align(ui_textR4C7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR4C7, "EACM-I");
    lv_obj_set_style_text_font(ui_textR4C7, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textR5C7 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_textR5C7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_textR5C7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_textR5C7, 200);
    lv_obj_set_y(ui_textR5C7, 66);
    lv_obj_set_align(ui_textR5C7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_textR5C7, "EACM-I");
    lv_obj_set_style_text_font(ui_textR5C7, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_nextBtn = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_nextBtn, 57);
    lv_obj_set_height(ui_nextBtn, 32);
    lv_obj_set_x(ui_nextBtn, 200);
    lv_obj_set_y(ui_nextBtn, -104);
    lv_obj_set_align(ui_nextBtn, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_nextBtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_nextBtn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_nextBtn, lv_color_hex(0xC3F3F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_nextBtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_nextBtn, lv_color_hex(0x23E40D), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_nextBtn, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui_nextBtn, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui_nextBtn, lv_color_hex(0x69EB5B), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui_nextBtn, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui_nextBtn, 20, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui_nextBtn, 0, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_countText = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_countText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_countText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_countText, 199);
    lv_obj_set_y(ui_countText, -103);
    lv_obj_set_align(ui_countText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_countText, "Next");
    lv_obj_set_style_text_font(ui_countText, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, 63);
    lv_obj_set_y(ui_Label3, -124);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "YEAR ENGINEERING");
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_privBtn = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_privBtn, 51);
    lv_obj_set_height(ui_privBtn, 28);
    lv_obj_set_x(ui_privBtn, 202);
    lv_obj_set_y(ui_privBtn, 100);
    lv_obj_set_align(ui_privBtn, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_privBtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_privBtn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_privBtn, lv_color_hex(0xFB8C9A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_privBtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_countText1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_countText1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_countText1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_countText1, 201);
    lv_obj_set_y(ui_countText1, 100);
    lv_obj_set_align(ui_countText1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_countText1, "Next");
    lv_obj_set_style_text_font(ui_countText1, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

}


void updatesubjects(lv_obj_t *label, const char *text) {
    lv_label_set_text(label, text);
}
