#ifndef _UI_COMP_HMSPANEL_H
#define _UI_COMP_HMSPANEL_H

#include "../ui.h"

#ifdef __cplusplus
extern "C"
{
#endif

// COMPONENT hmsPanel
#define UI_COMP_HMSPANEL_HMSPANEL 0
#define UI_COMP_HMSPANEL_HMSPANELCONTAINER 1
#define UI_COMP_HMSPANEL_HMSPANELCONTAINER_HMSPANELCAPTION 2
#define UI_COMP_HMSPANEL_HMSPANELCONTAINER_HMSPANELNO 3
#define UI_COMP_HMSPANEL_HMSPANELCONTAINER_HMSPANELNO1_HMSPANELNOLABEL 4
#define _UI_COMP_HMSPANEL_NUM 5
    lv_obj_t *ui_hmsPanel_create(lv_obj_t *comp_parent);
    void ui_hmsPanel_show(const char *title);
    void ui_hmsPanel_hide();
#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif