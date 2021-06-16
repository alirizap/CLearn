#ifndef LINE_H
#define LINE_H

// Clear_line: Clears the current line.
void clear_line(void);

// add_word: Adds word to the end of the current line.
// if this is not the first word on the line.
// puts one space before word.
void add_word(const char *word);

// space_remining: Returns the number of characters left
// in the current line.
int space_remaining(void);

// write_line: Writes the current line with justification
void write_line(void);

// flush_line: Writes the current line without justification
// If the line is empty, does nothing.
void flush_line(void);

#endif