//
// Created by Shou C on 3/21/20.
//

bool find_index_helper(int* arr, int l, int r){
    if (r < l)
        return false;
    int mid_index = (l + r) / 2;
    int mid_val = arr[mid_index];
    if (mid_index == arr[mid_index])
        return true;
    if (mid_index < mid_val)
        return find_index_helper(arr, l, mid_index - 1);
    return find_index_helper(arr, mid_index + 1, r);
}

bool find_index(int* arr, int len){
    return find_index_helper(arr, 0, len - 1);
}
