class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        for (int i = 0; i < arr.size() - 1; i++) {

            int largest_right = arr[i + 1];

            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[j] > largest_right)
                    largest_right = arr[j];
            }

            arr[i] = largest_right;
        }

        arr[arr.size() - 1] = -1;

        return arr;
    }
};