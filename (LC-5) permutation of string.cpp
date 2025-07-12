class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for (char c : s1) {
            freq[c - 'a']++;
        }

        int windSize = s1.length();
        int s2Len = s2.length();

        for (int i = 0; i <= s2Len - windSize; i++) {
            int windFreq[26] = {0};
            for (int j = 0; j < windSize; j++) {
                windFreq[s2[i + j] - 'a']++;
            }

            if (isFreqSame(freq, windFreq)) {
                return true;
            }
        }

        return false;
    }
};
