#define __DEBUG__
#define TAG "chyj"
#ifdef __DEBUG__ //改进方法
#define DebugPrint(fmt,args...) printf("[file:%s fun:%s line:%d tag:%s]: "  fmt  "\n",  __FILE__, __FUNCTION__, __LINE__, TAG, ##args);
#else
#define DebugPrint(fmt,args...)
#endif
