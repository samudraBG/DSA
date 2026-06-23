// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         unordered_map<char, int> mp;

//         for (char ch : s) {
//             mp[ch]++;
//         }

//         for (char ch : t) {
//             mp[ch]--;
//             if (mp[ch] < 0) {
//                 return ch;
//             }
//         }

//         return ' '; // never reached
//     }
// };

class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;

        for (char ch : s) {
            ans ^= ch;
        }

        for (char ch : t) {
            ans ^= ch;
        }

        return ans;
    }
};