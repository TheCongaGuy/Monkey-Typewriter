# Monkey-Typewriter
I was bored one day, and thought to myself "Hey, you know the theory that with enough monkeys and bananas, they can recreate the works of shakespeare? I wonder if that adds up?" So, I opened Visual Studio and got to work! This is a very simple program that allows you to truly test this theorem.
## Findings
What I found in this little experiment was that through random chance, it could reliably type three letter words, but got stuck on anything more complex (I.E. more letters) This confused me a little; how could the step from three to four characters add so much more time to the test?

Taking a look at my code; with each character that needs to be typed there are ninety five possible outcomes. With one character, that means that there is roughly a 1% chance that it will be correct. My program can compute the result in roughly one millisecond (on my machine) Okay! Lets see how the probability for the correct answer to be typed in one second goes down for each character we add.
- 1 char(s) : +100%
- 2 char(s) : 11.08%
- 3 char(s) : 0.12%
- 4 char(s) : 0.001%

Looking at that probability, to me it suddenly becomes clear as to why there is a sudden slowdown. When three characters are in the sentence, there is a 1% chance that that the computer outputs the correct characters in ten seconds. However, once a fourth character is introduced, it suddenly takes fifteen **minutes** for the same chance of a correct result occuring.
