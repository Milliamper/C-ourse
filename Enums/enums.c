#include <stdio.h>

enum Day{Mon, Tue, Wed, Thru, Fri, Sat, Sun};

int main() {
    // enums: user definied type of named integer identifiers

    enum Day today = Fri;
    printf("%d\n", today);

}