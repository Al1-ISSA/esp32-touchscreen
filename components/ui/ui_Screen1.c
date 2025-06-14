// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_img_src( ui_Screen1, &ui_img_back2_png, LV_PART_MAIN | LV_STATE_DEFAULT );

//mole1
ui_mole1 = lv_imgbtn_create(ui_Screen1);
lv_imgbtn_set_src(ui_mole1, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1881230945, NULL);
lv_obj_set_width( ui_mole1, 60);  /// 1
lv_obj_set_height( ui_mole1, 50);   /// 1
lv_obj_set_x( ui_mole1, -208 );
lv_obj_set_y( ui_mole1, 12 );
lv_obj_set_align( ui_mole1, LV_ALIGN_CENTER );


//mole2
ui_mole2 = lv_imgbtn_create(ui_Screen1);
lv_imgbtn_set_src(ui_mole2, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1881230945, NULL);
lv_obj_set_width( ui_mole2, 60);  /// 1
lv_obj_set_height( ui_mole2, 50);   /// 1
lv_obj_set_x( ui_mole2, 5 );
lv_obj_set_y( ui_mole2, 12 );
lv_obj_set_align( ui_mole2, LV_ALIGN_CENTER );


//mole3
ui_mole3 = lv_imgbtn_create(ui_Screen1);
lv_imgbtn_set_src(ui_mole3, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1881230945, NULL);
lv_obj_set_width( ui_mole3, 60);  /// 1
lv_obj_set_height( ui_mole3, 50);   /// 1
lv_obj_set_x( ui_mole3, 208 );
lv_obj_set_y( ui_mole3, 12 );
lv_obj_set_align( ui_mole3, LV_ALIGN_CENTER );

//mole4
ui_mole4 = lv_imgbtn_create(ui_Screen1);
lv_imgbtn_set_src(ui_mole4, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1881230945, NULL);
lv_obj_set_width( ui_mole4, 60);  /// 1
lv_obj_set_height( ui_mole4, 50);   /// 1
lv_obj_set_x( ui_mole4, -208 );
lv_obj_set_y( ui_mole4, 127 );
lv_obj_set_align( ui_mole4, LV_ALIGN_CENTER );

//mole5
ui_mole5 = lv_imgbtn_create(ui_Screen1);
lv_imgbtn_set_src(ui_mole5, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1881230945, NULL);
lv_obj_set_width( ui_mole5, 60);  /// 1
lv_obj_set_height( ui_mole5, 50);   /// 1
lv_obj_set_x( ui_mole5, 5 );
lv_obj_set_y( ui_mole5, 127 );
lv_obj_set_align( ui_mole5, LV_ALIGN_CENTER );

//mole6
ui_mole6 = lv_imgbtn_create(ui_Screen1);
lv_imgbtn_set_src(ui_mole6, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1881230945, NULL);
lv_obj_set_width( ui_mole6, 60);  /// 1
lv_obj_set_height( ui_mole6, 50);   /// 1
lv_obj_set_x( ui_mole6, 208 );
lv_obj_set_y( ui_mole6, 127 );
lv_obj_set_align( ui_mole6, LV_ALIGN_CENTER );

// lv_obj_add_flag( ui_mole1, LV_OBJ_FLAG_HIDDEN);
// lv_obj_add_flag( ui_mole2, LV_OBJ_FLAG_HIDDEN);
// lv_obj_add_flag( ui_mole3, LV_OBJ_FLAG_HIDDEN);
// lv_obj_add_flag( ui_mole4, LV_OBJ_FLAG_HIDDEN);
// lv_obj_add_flag( ui_mole5, LV_OBJ_FLAG_HIDDEN);
// lv_obj_add_flag( ui_mole6, LV_OBJ_FLAG_HIDDEN);


ui_Button1 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Button1, 100);
lv_obj_set_height( ui_Button1, 50);
lv_obj_set_x( ui_Button1, 286 );
lv_obj_set_y( ui_Button1, -186 );
lv_obj_set_align( ui_Button1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Button1, 100, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0xF95454), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label1 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label1, 287 );
lv_obj_set_y( ui_Label1, -187 );
lv_obj_set_align( ui_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label1,"start");

ui_Panel1 = lv_obj_create(ui_Screen1);
lv_obj_set_width( ui_Panel1, 178);
lv_obj_set_height( ui_Panel1, 119);
lv_obj_set_x( ui_Panel1, -296 );
lv_obj_set_y( ui_Panel1, -162 );
lv_obj_set_align( ui_Panel1, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_Panel1,LV_FLEX_FLOW_ROW);
lv_obj_set_flex_align(ui_Panel1, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
lv_obj_clear_flag( ui_Panel1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0xF95454), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label2 = lv_label_create(ui_Panel1);
lv_obj_set_width( ui_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label2, -332 );
lv_obj_set_y( ui_Label2, -158 );
lv_obj_set_align( ui_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label2,"Score: ");

ui_Score = lv_label_create(ui_Panel1);
lv_obj_set_width( ui_Score, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Score, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Score, -151 );
lv_obj_set_y( ui_Score, -118 );
lv_obj_set_align( ui_Score, LV_ALIGN_CENTER );
lv_label_set_text(ui_Score,"0");

lv_obj_add_event_cb(ui_mole1, ui_event_mole, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_mole2, ui_event_mole, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_mole3, ui_event_mole, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_mole4, ui_event_mole, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_mole5, ui_event_mole, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_mole6, ui_event_mole, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);

}
