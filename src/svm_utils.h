#include <linux/kernel.h>

int svm_check(void);  // Check if SVM is available or a possibility
int enable_svm(void);  // Turn on SVM (flip EFER.SVME to 1)