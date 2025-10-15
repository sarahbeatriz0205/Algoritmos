// Resolução do professor
int maior_diferenca(int a[], int n){
    int mdif = a[1] - a[0]; // 1
    for (int i=2; i<n; ++i){ // 2(n-2)
        if (a[i] - a[i-1] < mdif){ // 4(n-2)
            mdif = a[i] - a[i-1]; // 4(n-2)
        }
    }
    return mdif; // 1

    // 10n - 15 é O(n)
}