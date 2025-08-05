void plusMinus(vector<int> arr) {
    int positive = 0, negative = 0, zero = 0;
    int n = arr.size();

    for (int num : arr) {
        if (num > 0) positive++;
        else if (num < 0) negative++;
        else zero++;
    }

    cout << fixed << setprecision(6);
    cout << (double)positive / n << endl;
    cout << (double)negative / n << endl;
    cout << (double)zero / n << endl;
}

