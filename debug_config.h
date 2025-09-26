#pragma once

#ifdef DEBUG_MODE
  #define DBG_LOGI(tag, fmt, ...) ESP_LOGI(tag, fmt, ##__VA_ARGS__)
  #define DBG_LOGW(tag, fmt, ...) ESP_LOGW(tag, fmt, ##__VA_ARGS__)
  #define DBG_LOGD(tag, fmt, ...) ESP_LOGD(tag, fmt, ##__VA_ARGS__)
  #define DBG_LOGE(tag, fmt, ...) ESP_LOGE(tag, fmt, ##__VA_ARGS__)
#else
  #define DBG_LOGI(tag, fmt, ...) ((void)0)
  #define DBG_LOGW(tag, fmt, ...) ((void)0)
  #define DBG_LOGD(tag, fmt, ...) ((void)0)
  #define DBG_LOGE(tag, fmt, ...) ((void)0)
#endif