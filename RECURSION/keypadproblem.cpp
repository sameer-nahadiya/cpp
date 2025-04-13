class Solution
{
private:
    void solve(string digit, string output, int index, vector<string> &ans, string mapping[])
    {
        // base case for recursion
        if (index >= digit.length())
        {
            ans.push_back(output);
            return;
        }
        int number = digit[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++)
        {
            output.push_back(value[i]);
            solve(digit, output, index + 1, ans, mapping);
            ans.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        string output;
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digit, output, index, ans, mapping);
        return ans;
    }
};





import java.util.Random;

public class GameOfChance {
    public static void main(String[] args) {
        Random random = new Random();
        int target = random.nextInt(10); 
        System.out.println("Target number: " + target);
        int[] randomNumbers = new int[5];
        for (int i = 0; i < randomNumbers.length; i++) {
            randomNumbers[i] = random.nextInt(10);
        }
        System.out.println("Random numbers generated:");
        for (int number : randomNumbers) {
            System.out.print(number + " ");
            if (number == target) {
                System.out.println("\nCongratulations! You matched the target number.");
                return; 
            }
        }
        System.out.println("\nBetter luck next time! No match found.");
    }
}





