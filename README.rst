μassert.h
=========


Why another assertion library?
------------------------------

The existing assertion library which is already there in C is not very usable for writing tests.
The problem with that is that if there is even a single failure in the tests the execution stops
then and there itself and does not print the other assertion failures. This library will run all
the assertions and show them as failed if they failed else will not print anything if they pass.


How to use?
-----------

Copy and paste the ``uassert.h`` file into your project and build that file along with other files
in your projects which need assertions. The following is a small example of how this file should
be used.


.. code-block:: c

    #include <stdio.h>
    #include "uassert.h"

    int main(int argc, char const *argv[])
    {
        printf("Running tests...\n");
        ASSERT(5 == 4);
        ASSERT(5 == 5);
        ASSERT(5 == 7);
        return TEST_SUCCESS;
    }



Run the above code as follows:

.. code-block:: bash

    cc -o ./bin/tests ./test/main.c
    ./bin/tests
    Running tests...
    Assertion failure [5 == 4] on line 7 in file ./test/main.c
    Assertion failure [5 == 7] on line 9 in file ./test/main.c


LICENSE
-------

The MIT License (MIT)

Copyright (c) 2019 Tanay PrabhuDesai

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

