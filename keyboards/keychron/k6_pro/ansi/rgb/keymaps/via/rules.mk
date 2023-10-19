SRC += features/mouse_turbo_click.c
SRC += features/scroll_turbo.c

MOUSEKEY_ENABLE = yes
DEFERRED_EXEC_ENABLE = yes

VIA_ENABLE = yes
OPT_DEFS += -DDYNAMIC_KEYMAP_LAYER_COUNT=5
