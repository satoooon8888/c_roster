# 構造体

変数をまとめて一つの変数にできる。

```c
#include <string.h>
// 構造体の定義
typedef struct {
    char name[100];
    int money;
} Person;

// 構造体を引数に持つ関数
void print_person(Person person) {
    // 構造体の中で宣言した変数(メンバという)を参照する
    printf("%s %d\n", person.name, person.money);
}

// 構造体の配列を引数に持つ配列 *を付ける
void print_person_list(Person* person_list, int length) {
    for (int i = 0; i < length; i++) {
        print_person(person_list[i]);
    }
}

int main(void) {
    // 構造体の初期化
    Person person = {"田中", 100};
    print_person(person);
    // 構造体の配列の定義
    Person people[100];
    // 初期化後に文字列を代入するにはstrncpyを使う
    // strncpy(代入先, 文字列, 文字数);
    strncpy(people[0].name, "山田", 100);
    people[0].money = 500;
    strncpy(people[1].name, "和田", 100);
    people[1].money = 1000;
    print_person_list(people, 2);
    return 0;
}
```

