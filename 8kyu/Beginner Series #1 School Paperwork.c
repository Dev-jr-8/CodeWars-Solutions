/*
DESCRIPTION:
Your classmates asked you to copy some paperwork for them. You know that there are 'n' classmates and the paperwork has 'm' pages.

Your task is to calculate how many blank pages do you need. If n < 0 or m < 0 return 0.

Example:
n= 5, m=5: 25
n=-5, m=5:  0
Waiting for translations and Feedback! Thanks!*/

#include <stdbool.h>

bool check_for_factor(int base, int factor) {
  // your code here
  //checking for mod of given inputs and returning true or falase based on their remainder
  bool ans = base%factor?false:true;
  return ans;
}