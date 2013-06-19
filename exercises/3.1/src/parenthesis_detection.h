/* 3-1. A common problem for compilers and text editors is determining whether
 * the parentheses in a string are balanced and properly nested. For example,
 * the string ((())())() contains properly nested pairs of parentheses, which
 * the strings )()( and ()) do not. Give an algorithm that returns true if a
 * string contains properly nested and balanced parentheses, and false if
 * otherwise. For full credit, identify the position of the first offending
 * parenthesis if the string is not properly nested and balanced.
 */

typedef struct char_input {
  char c;
  int line_position;
} char_input;

typedef struct list {
  char_input c;
  struct list *next;
} list;

char_input list_peak(*l) {}
char_input list_pop(**l) {}
void list_push(**l, char_input ci) {}


list *parens_parse(char *str, int str_len) {
  list *l;

  for (i = 0; i < str_len; i++) {
    char v = str[i];
    if (c == '(' || c == ')') {
      char_input ci = { c, i }
      if (*l == NULL) {
        *l = list_create();
      } else {
        list_push(l, ci);
      }
    }
  }

  return l;
}

int parens_unbalanced(list *l) {
  char_input ci;
  int balance = 0;

  // We open with a closing brace. always unbalanced.
  ci = list_peak(l);
  if (ci.c == ')') {
    return ci.line_position;
  }

  while (ci = list_pop(l)) {
    if (ci.c == ')') {
      balance--;
    } else {
      balance++;
    }

    // we have decremeneted past the last opening
    // paren. This will always result in a unbalanced
    // paren. Return the line position.
    if (balance < 0) {
      return ci.line_position;
    }
  }
}
