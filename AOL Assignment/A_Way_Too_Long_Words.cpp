#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    scanf("%d", &n);  // স্ট্রিংয়ের আকার ইনপুট
    char s[n + 1]; 
    scanf("%s", s);  // স্ট্রিং ইনপুট নেওয়া হচ্ছে

    // ইংরেজি ছোট অক্ষর গুনতে একটি কাউন্টিং অ্যারে
    int count[26] = {0};  // 26 টি ইংরেজি ছোট অক্ষরের জন্য

    // প্রতিটি অক্ষরের জন্য কাউন্টিং
    for (int i = 0; i < n; i++) {
        count[s[i] - 'a']++;  // অক্ষর অনুযায়ী কাউন্ট বৃদ্ধি
    }

    // সাজানো স্ট্রিং প্রিন্ট করার জন্য
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < count[i]; j++) {
            printf("%c", i + 'a');  // অক্ষর প্রিন্ট করা
        }
    }
    printf("\n");

    return 0;
}
