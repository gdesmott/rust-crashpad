#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

extern bool start_crashpad(char* raw_handler,
                           char* raw_datadir,
                           char* raw_url);

#ifdef __cplusplus
}  /* end extern "C" */
#endif
