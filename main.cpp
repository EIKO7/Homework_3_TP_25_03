#include <iostream>

template< class T > 
size_t unique(T* a, size_t s) 
{
    if (a == 0) 
    {
        return 0;
    }
    
    if (s <= 1) 
    {
        return s;
    }
    
    size_t new_size = 1;  
    
    for (size_t i = 1; i < s; i++) 
    {
        bool is_duplicate = false;
        
        for (size_t j = 0; j < new_size; j++) 
        {
            if (a[i] == a[j]) 
            {
                is_duplicate = true;
                break;
            }
        }
        
        if (!is_duplicate) 
        {
            a[new_size] = a[i];  
            new_size++;
        }
    }
    
    return new_size;
}

int main() 
{
    int arr[] = {1, 1, 2, 3, 2, 2};
    size_t size = 6;
    
    std::cout << "Original: ";
    for (size_t i = 0; i < size; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
    
    size_t new_size = unique(arr, size);
    
    std::cout << "Unique:   ";
    for (size_t i = 0; i < new_size; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
    std::cout << "New size: " << new_size << '\n';
    
    return 0;
}