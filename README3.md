Необходимо реализовать следующие функции:
// инициализация списка
int init(list *root);
// удаление списка
int destroy(list *root);
// проверка списка на пустоту
bool isEmpty(list root);
// поиск элемента по значению, вернуть NULL, если элемент не найден
list find(list root, int value);
// вставка элемента после текущего
int append(list *lst, int value);
// вставка элемента перед текущим
int prepend(list *lst, int value);
// удаление текущего элемента
int remove(list *lst);
// вывод списка в stdout в прямом порядке через пробел
int print(list *lst);
