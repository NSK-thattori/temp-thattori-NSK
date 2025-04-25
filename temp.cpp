#define VALUE_ALARM_TEMP (80.0F)
#define VALUE_REREASE_ALARM_TEMP (77.0F)
bool g_bl_alarm_flag = false;

bool func_judge_temp_alarm( float temp ) {
    if ((temp >= VALUE_ALARM_TEMP) && (g_bl_alarm_flag == false)) {
        g_bl_alarm_flag = true;
    } else if ((temp <= VALUE_REREASE_ALARM_TEMP) && (g_bl_alarm_flag == true)) {
        g_bl_alarm_flag = false;
    }
    return g_bl_alarm_flag;
}