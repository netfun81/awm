#include "keybind.h"

#include "awm.h"

#include <X11/Xlib.h>

void setup_keybinds(awm_state *state){
    /* lowerwindow keybind */
    XGrabKey(state->disp,
	    XKeysymToKeycode(state->disp, XStringToKeysym("Z")),
	    Mod4Mask,
	    state->root,
	    True,
	    GrabModeAsync,
	    GrabModeAsync);
    /* Rofi keybind */
    XGrabKey(state->disp,
	    XKeysymToKeycode(state->disp, XStringToKeysym("X")),
	    Mod4Mask,
	    state->root,
	    True,
	    GrabModeAsync,
	    GrabModeAsync);
    /* Exit keybind */
    XGrabKey(state->disp,
	    XKeysymToKeycode(state->disp, XStringToKeysym("F1")),
	    Mod4Mask,
	    state->root,
	    True,
	    GrabModeAsync,
	    GrabModeAsync);
    /* Terminal keybind */
    XGrabKey(state->disp,
	    XKeysymToKeycode(state->disp, XStringToKeysym("Return")),
	    Mod4Mask,
	    state->root,
	    True,
	    GrabModeAsync,
	    GrabModeAsync);
    /* Resize keybind */
    XGrabKey(state->disp,
	    XKeysymToKeycode(state->disp, XStringToKeysym("R")),
	    Mod4Mask,
	    state->root,
	    True,
	    GrabModeAsync,
	    GrabModeAsync);
    /* Close Window keybind */
    XGrabKey(state->disp,
	    XKeysymToKeycode(state->disp, XStringToKeysym("Q")),
	    Mod4Mask,
	    state->root,
	    True,
	    GrabModeAsync,
	    GrabModeAsync);

    /* Move Window keybind */
    XGrabButton(state->disp, 1, Mod4Mask, state->root, True, ButtonPressMask,
	    GrabModeAsync, GrabModeAsync, None, None);
}
