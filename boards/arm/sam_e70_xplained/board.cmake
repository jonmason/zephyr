include($ENV{ZEPHYR_BASE}/boards/common/openocd.board.cmake)

set(OPENOCD_POST_CMD "atsamv gpnvm set 1")

set_property(GLOBAL APPEND PROPERTY FLASH_SCRIPT_ENV_VARS
  OPENOCD_POST_CMD
  )
