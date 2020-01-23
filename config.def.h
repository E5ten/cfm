#ifndef CFM_CONFIG_H
#define CFM_CONFIG_H

/* 
 * Uncomment an option to enable it.
 * Comment to disable.
 * Each is accompanied with an explanation.
 */

/* EDITOR:
 * If not set, cfm will attempt to use the
 * $EDITOR environment variable when opening
 * files.
 *
 * Value: string
 */
//#define EDITOR "/usr/local/bin/nvim"

/* SHELL:
 * If not set, cfm will attempt to use the $SHELL
 * environment variable to open shells in a given directory.
 * Else, the specified shell will be invoked.
 *
 * Value: string
 */
//#define SHELL "/bin/bash"

/* OPENER:
 * If not set, cfm will not use an opener.
 * Otherwise, it will use the specified opener when
 * you use the 'o' key.
 *
 * Value: string
 */
//#define OPENER "xdg-open"

/* ENTER_OPENS:
 * If not set, using enter will be the same as using
 * l or right arrow on normal files, aka they will be
 * opened with EDITOR. Otherwise, pressing enter will open
 * a file with OPENER. No-op if OPENER not defined or NULL.
 *
 * Value: boolean (1 or 0)
 */
//#define ENTER_OPENS 0

/* POINTER:
 * If not set, cfm will use "->" in front of the selected
 * item. You can set a different string here, such as ">".
 *
 * Value: string
 */
//#define POINTER "->"

/* INVERT_SELECTION:
 * If set, cfm will reverse the foreground/background colors
 * of the currently selected line.
 *
 * Value: boolean (1 or 0)
 */
//#define INVERT_SELECTION 0

/* INDENT_SELECTION:
 * If not set, all lines will be indented enough to make room
 * for the pointer, regardless of being selected or not.
 * If set, only the selected line will be indented.
 *
 * Value: boolean (1 or 0)
 */
//#define INDENT_SELECTION 0

#endif
