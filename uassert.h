#include <stdio.h>

int _test_suite_exit_value = 0;
#define ASSERT(EXPRESSION) if ((EXPRESSION) != 1) {\
        printf("Assertion failure [%s] on line %d in file %s\n", #EXPRESSION, __LINE__, __FILE__); \
        _test_suite_exit_value = 1; \
    }
#define TEST_SUCCESS _test_suite_exit_value

