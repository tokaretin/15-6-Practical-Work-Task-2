/*Задача 2
Что нужно сделать
Вам даётся массив целых чисел и одно число — результат. 
Необходимо найти в массиве два числа, сумма которых будет давать результат, 
и вывести их на экран. Гарантируется, что только одна пара чисел в массиве даёт в сумме результат.

Пример:

a = {2, 7, 11, 15}. Результат = 9

2 + 7 = 9, так что надо вывести числа 2 и 7

Советы и рекомендации
Как только найдена первая удовлетворяющая условиям пара, можно заканчивать поиск.

*/

#include <iostream>
#include <vector>

// первое решение
//int main() {
//    std::vector<int> vec = { 2, 7, 11, 15 };
//    int target = 9;
//
//    int left = 0; // Указатель на начало массива
//    int right = vec.size() - 1; // Указатель на конец массива
//
//    for (int i = 0; left < right; i++) 
//    {
//        int sum = vec[left] + vec[right];
//
//        if (sum == target) 
//        {
//            std::cout << "Числа " << vec[left] << " и " << vec[right] << " дадут сумму " << target << std::endl;
//            break;
//        }
//        else if (sum < target) 
//        {
//            left++;
//        }
//        else {
//            right--;
//        }
//    }
//
//    return 0;
//}


// лучшее решение
#include <iostream>

void findPair(int array[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (array[i] + array[j] == sum)
            {
                std::cout << "First " << array[i] << " and Second " << array[j] << " Will give " << sum;
                return;
            }
        }
    }
}

int main()
{
    int a[] = { 2, 7, 11, 15 };
    findPair(a, 4, 9);
    return 0;
}