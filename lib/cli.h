/*
 * Library for drawing frames in a command line interface
char[] get_guess();
*/

typedef struct {
  int rows;
  int cols;
  char** grid;
} Frame;

void clear_screen();
void print_char_bank(unsigned c, unsigned i);
Frame* frameFromFile(const char* path);
Frame* frameFromMatrix(int rows, int cols, char matrix[rows][cols]);
Frame* word_bank(unsigned c, unsigned i);
void printFrame(Frame* frame);
void freeFrame(Frame* frame);
