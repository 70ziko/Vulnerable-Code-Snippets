/*
netkit-telnet 0.17 BUFFER OVERFLOW
telnet stack smashing bug, in a completely unrelated part of DISPLAY= handling to the last one... from netkit-telnet 0.17 - when passing unix:arg or ":arg" in DISPLAY the argument is strcat() onto a fixed stack 256 byte buffer


*/


static void env_fix_display(void) {
/* Code is incomplete and has syntax errors; cannot fix without complete function context */
}
