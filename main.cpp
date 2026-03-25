#include <iostream>

template< class T > 
size_t unique(T* a, size_t s) 
{
    if (a == 0) {
        return 0;
    }
    
    if (s <= 1) {
        return s;
    }
    
    size_t new_size = 1;  
    
    for (size_t i = 1; i < s; i++) {
        bool is_duplicate = false;
        
        for (size_t j = 0; j < new_size; j++) {
            if (a[i] == a[j]) {
                is_duplicate = true;
                break;
            }
        }
        
        if (!is_duplicate) {
            a[new_size] = a[i];
            new_size++;
        }
    }
    
    return new_size;
}

int main() 
{
    
}