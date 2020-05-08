/* ex041601.c */
static unsigned int r;
int random(void) {
    r = (r * 123 + 59) % 65536;
    return (r);
}
unsigned ramdomstart(unsigned int seed) { r = seed; }
