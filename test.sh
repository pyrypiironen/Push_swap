clear
echo "Memory leaks"
echo
echo "In this section, we'll test memory leaks using leaks command."
echo
echo
echo
echo "Press enter to start testing."
read
# Memory leaks 1
clear
echo "Memory leaks"
echo
echo "First test: Test memory leaks of push_swap with invalid input."
echo
echo "Test input: leaks -atExit -- ./push_swap 1 4 42 8 7 one"
echo
echo "Right output is 'Error' without memoryleaks."
echo
echo "User output:"
leaks -atExit -- ./push_swap 1 4 42 8 7 one
echo
echo
echo
echo "Press enter to move forward."
read
# Memory leaks 2
clear
echo "Memory leaks"
echo
echo "Second test: Test memory leaks of push_swap with valid input."
echo
echo "Test input: leaks -atExit -- ./push_swap 3 2 1"
echo
echo "Check that there is no memoryleaks."
echo
echo "User output:"
leaks -atExit -- ./push_swap 3 2 1
echo
echo
echo
echo "Press enter to move forward."
read
# Memory leaks 3
clear
echo "Memory leaks"
echo
echo "Third test: Test memory leaks of push_swap with valid input of 505 integers."
echo
echo "Test input: leaks -atExit -- ./push_swap <505 random values>"
echo
echo "Check that there is no memoryleaks."
echo
echo "User output:"
leaks -atExit -- ./push_swap 6304 1892 7047 4184 -5020 3937 3745 9094 5334 770 -7976 3722 -9732 1287 -8591 -3297 -2336 -4809 6888 -8999 -4099 -1550 2585 -2577 2796 4414 6450 4185 7844 -1161 -1580 -5337 -558 -2579 -335 -3505 8296 -6143 -3047 2334 4039 -5304 -8337 -3413 5079 -7621 5622 182 6919 7188 -98 2085 8275 5749 1529 5560 2024 -4494 3808 -3543 -1691 -6174 -1881 8154 -6997 -6173 -6414 4680 -948 8870 -282 9678 623 700 -7151 -1750 6050 2991 4830 -3849 -1395 9241 -2192 -9736 8403 -5872 -4890 -5549 8638 -3361 7289 -391 9728 -8350 2116 -4278 -3018 4808 3821 8866 4487 -5023 5259 6856 -5296 -3607 661 108 -5196 -288 -7064 -491 -5790 4901 -6670 -6494 5452 -9132 -1660 149 -6728 8649 8373 -6193 7547 -7786 5458 4526 -5652 1925 -6397 -7923 -3310 -6426 -4567 7695 7977 -1700 9552 3154 -8361 4701 -8704 -7293 3268 -2898 9852 2289 6100 6985 8167 6155 5821 6722 7765 -8556 7126 -2508 -4663 -371 -1181 -4862 -326 -5249 5576 5793 -3398 -1281 7 -5125 -7830 6318 -8799 3160 18 -4314 -7115 -5316 -8384 -3349 -447 -8492 5132 6056 1489 2449 2752 7694 6383 -6833 -8177 966 9824 320 -9438 7914 6548 -4511 3913 1710 -2106 -7640 -7063 6806 -7498 7810 -7975 -7408 -1168 1609 140 -6147 -5653 -4254 5873 7586 3950 1469 7397 6487 6838 -4428 2594 191 -9288 -8889 -8955 7984 -9281 -3702 9973 2259 -740 6815 -2666 -2888 8165 7090 8594 4665 -9014 741 -3514 9040 3947 -8412 -6564 -7158 -4540 7252 8538 4116 -7018 5045 -8804 -8178 -611 5416 -6102 -7462 -6619 -5219 -4163 -5566 -8159 8287 4968 9140 1555 2103 -9457 6158 -3676 -965 6456 -5754 -3235 3694 9065 -1503 1540 -6521 -3118 -971 7483 3014 -5159 -8986 -1392 -9384 4388 4415 5044 -6469 484 3316 -8611 871 -6425 7546 -2815 5021 7581 7815 -9889 1807 -9376 -9880 3650 -8667 -4808 -8064 -3265 -1302 -3213 4358 9400 5460 5182 -6428 9408 7752 -2023 -7889 -7138 -3437 -6022 5040 5693 -4195 -1327 856 -6317 7108 -7233 9690 7337 -9278 8659 -8206 2838 3043 4422 6007 -4247 -121 247 -9290 -6274 -5591 -1962 -8147 -8648 1197 7936 -5973 -585 -6104 -496 2760 -1220 -5132 7283 8971 2670 -1412 -2289 1657 1405 -8498 9500 5358 -7853 9609 -1900 2710 -939 8388 3855 1195 -3342 4143 8552 -6115 -2277 -8189 -3634 -1605 6720 3432 5172 7056 2450 -2513 -4126 4803 -3081 7084 -818 -6188 2929 9707 -7491 -2083 -9475 1731 -5262 4658 -6929 3466 -9312 7478 -5036 -5884 -3254 -557 1527 -5478 -8917 5183 -2300 1771 -7130 -3494 -2536 5229 6560 2559 4197 9805 5055 -36 -6876 830 4223 -8859 2472 22 1092 -2809 -374 7359 8426 481 4017 -739 -5729 -4393 4122 3451 1331 8288 -4578 -6948 -4655 -3070 4821 -7932 -2503 -4391 -1258 7092 9151 -1444 -5822 5794 6788 454 5861 2939 -7712 -5792 619 -8956 -2623 879 3070 -3785 2230 -9843 -8423 8806 -3745 -2889 -8879 6346 -6239 -404 5118 4529 5985 8536 -6573 4133 -2008 -1334 -7898 7045 -565 7494 -8896 3964 -1354 7849 8478
echo
echo
echo "Third test: Test memory leaks of push_swap with valid input of 505 integers."
echo
echo
echo
echo "Press enter to move forward."
read
# Memory leaks 4a
clear
echo "Memory leaks"
echo
echo "4th test (1/2): Test memory leaks of checker with invalid input."
echo
echo "Test input: ./push_swap 1 42 one | leaks -atExit --  ./checker 1 42 one"
echo
echo "Right output is 'Error' without memoryleaks."
echo
echo "User output:"
./push_swap 1 42 one | leaks -atExit --  ./checker 1 42 one
echo
echo
echo
echo "Press enter to move forward."
read
# Memory leaks 4b
clear
echo "Memory leaks"
echo
echo "4th test (2/2): Test memory leaks of checker with invalid input."
echo
echo "Test input: ./push_swap 1 42 3 | leaks -atExit --  ./checker 1 42 one"
echo
echo "Right output is 'Error' without memoryleaks."
echo
echo "User output:"
./push_swap 1 42 3 | leaks -atExit --  ./checker 1 42 one
echo
echo
echo
echo "Press enter to move forward."
read
# Memory leaks 5
clear
echo "Memory leaks"
echo
echo "5th test: Test memory leaks of checker with valid input."
echo
echo "Test input: ./push_swap 3 2 1 | leaks -atExit --  ./checker 3 2 1"
echo
echo "Right output is 'OK' without memoryleaks."
echo
echo "User output:"
./push_swap 3 2 1 | leaks -atExit --  ./checker 3 2 1
echo
echo
echo
echo "Press enter to move forward."
read
# CHECKER
clear
echo "Checker program - Error management"
echo
echo "In this section, we'll evaluate the checker's error management.
If at least one fails, no points will be awarded for this
section. Move to the next one."
echo
echo
echo
echo "Press enter to start testing."
read
# Error management 1
clear
echo "Checker program - Error management"
echo
echo "First test: Run checker with non numeric parameters."
echo
echo "Test input: ./checker a b c"
echo
echo "Right output is 'Error'."
echo
echo "User output:"
./checker a b c
echo
echo
echo
echo "Press enter to move forward."
read
# Error management 2
clear
echo "Checker program - Error management"
echo
echo "Second test: Run checker with a duplicate numeric parameter."
echo
echo "Test input: ./checker 1 2 4 42 1"
echo
echo "Right output is 'Error'."
echo
echo "User output:"
./checker 1 2 4 42 1
echo
echo
echo
echo "Press enter to move forward."
read
# Error management 3
clear
echo "Checker program - Error management"
echo
echo "Third test: Run checker with only numeric parameters including one
greater than MAX_INT."
echo
echo "Test input: ./checker 1 2 3 4 2147483648"
echo
echo "Right output is 'Error'."
echo
echo "User output:"
./checker 1 2 3 4 2147483648
echo
echo
echo
echo "Press enter to move forward."
read
# Error management 4
clear
echo "Checker program - Error management"
echo
echo "4th test: Run checker without any parameters. The program must
not display anything and give the prompt back."
echo
echo "Test input: ./checker"
echo
echo "Right output is display nothing and give the prompt back."
echo
echo "User output:"
./checker
echo "This is the next line."
echo
echo
echo
echo "Press enter to move forward."
read
# Error management 5
clear
echo "Checker program - Error management"
echo
echo "5th test: Run checker with valid parameters, and write an action that
doesn't exist during the instruction phase."
echo
echo "Test input: ./checker 1 2 3 42 420 666"
echo
echo "Right output is 'Error'."
echo
echo "Write an action that doesn't exist: (for example: pc)"
./checker 1 2 3 42 420 666
echo
echo
echo
echo "Press enter to move forward."
read
# Error management 6
clear
echo "Checker program - Error management"
echo
echo "6th test: Run checker with valid parameters, and write an action with
one or several spaces before and/or after the action during
the instruction phase."
echo
echo "Test input: ./checker 1 2 3 42 420 666"
echo
echo "Right output is 'Error'."
echo
echo "Write an action with one or several spaces before the action: (for example: ' pb')"
./checker 1 2 3 42 420 666
echo
echo "Write an action with one or several spaces after the action: (for example: 'pb ')"
./checker 1 2 3 42 420 666
echo
echo
echo
echo "Press enter to move forward."
read
# Error management 7
clear
echo "Checker program - Error management"
echo
echo "7th test: Run checker with only numeric parameters including one
smaller than MIN_INT."
echo
echo "Test input: ./checker 1 2 3 4 -2147483649"
echo
echo "Right output is 'Error'."
echo
echo "User output:"
./checker 1 2 3 4 -2147483649
echo
echo
echo
echo "Press enter to move forward."
read
# FALSE TESTS
clear
echo "Checker program - False tests"
echo
echo "In this section, we'll evaluate the checker's ability to manage
a list of instructions that doesn't sort the list. Execute the
following 2 tests. If at least one fails, no points will be awarded
for this section. Move to the next one."
echo
echo "Don't forget to press CTRL+D to stop reading during the
intruction phase."
echo
echo
echo
echo "Press enter to move forward."
read
# False tests 1
clear
echo "Checker program - False tests"
echo
echo "First test: Run checker with the following command '$>./checker 0 9 1 8 2
7 3 6 4 5' then write the following valid action list [sa, pb, rrr]."
echo
echo "Test input: ./checker 0 9 1 8 2 7 3 6 4 5"
echo
echo "Right output is 'KO'."
echo
echo "Write the following valid action list [sa, pb, rrr]:"
./checker 0 9 1 8 2 7 3 6 4 5
echo
echo
echo
echo "Press enter to move forward."
read
# False tests 2a
clear
echo "Checker program - False tests"
echo
echo "Second test (1/3): Run checker with a valid list as parameter of your choice then
write a valid instruction list that doesn't order the integers.
Checker should display 'KO'. You'll have to specifically check
that the program wasn't developed to only answer correctly
on the test included in this scale. You should repeat this
test couple of times with several permutations before you
validate it.."
echo
echo "Test input: ./checker 666 0 -42 200 -420 420 500"
echo
echo "Right output is 'KO'."
echo
echo "Write the following action list [ra]:"
./checker 666 0 -42 200 -420 420 500
echo
echo
echo
echo "Press enter to try again."
read
# False tests 2b
clear
echo "Checker program - False tests"
echo
echo "Second test (2/3): Run checker with a valid list as parameter of your choice then
write a valid instruction list that doesn't order the integers.
Checker should display 'KO'. You'll have to specifically check
that the program wasn't developed to only answer correctly
on the test included in this scale. You should repeat this
test couple of times with several permutations before you
validate it.."
echo
echo "Test input: ./checker 666 0 -42 200 -420 420 500"
echo
echo "Right output is 'KO'."
echo
echo "Write the action list of your choice (that doesn't order the integers):"
./checker 666 0 -42 200 -420 420 500
echo
echo
echo
echo "Press enter to try again."
read
# False tests 2c
clear
echo "Checker program - False tests"
echo
echo "Second test (3/3): Run checker with a valid list as parameter of your choice then
write a valid instruction list that doesn't order the integers.
Checker should display 'KO'. You'll have to specifically check
that the program wasn't developed to only answer correctly
on the test included in this scale. You should repeat this
test couple of times with several permutations before you
validate it.."
echo
echo "Test input: ./checker 1 2 3 4"
echo
echo "Right output is 'KO'."
echo
echo "Write the action list of your choice (that doesn't order the integers):"
./checker 1 2 3 4
echo
echo
echo
echo "Press enter to move forward."
read
# RIGHT TESTS
clear
echo "Checker program - Right tests"
echo
echo "In this section, we'll evaluate the checker's ability to manage
a lists of instructions that sort the list. Execute the
following 2 tests. If at least one fails, no points will
be awarded for this section. Move to the next one."
echo
echo "Don't forget to press CTRL+D to stop reading during the
intruction phase."
echo
echo
echo
echo "Press enter to move forward."
read
# Right tests 1
clear
echo "Checker program - Right tests"
echo
echo "First test: Run checker with the following command '$>./checker 0 1 2'
then press CTRL+D without writing any instruction."
echo
echo "Test input: ./checker 0 1 2"
echo
echo "Right output is 'OK'."
echo
echo "Press CTRL+D without writing any instructions:"
./checker 0 1 2
echo
echo
echo
echo "Press enter to move forward."
read
# Right tests 2
clear
echo "Checker program - Right tests"
echo
echo "Second test: Run checker with the following command '$>./checker 0 9 1 8 2'
then write the following valid action list [pb, ra, pb, ra, sa, ra, pa, pa]."
echo
echo "Test input: ./checker 0 9 1 8 2"
echo
echo "Right output is 'OK'."
echo
echo "Write the following action list [pb, ra, pb, ra, sa, ra, pa, pa]:"
./checker 0 9 1 8 2
echo
echo
echo
echo "Press enter to move forward."
read
# Right tests 3a
clear
echo "Checker program - Right tests"
echo
echo "Third test (1/3): Run checker with a valid list as parameter of your choice then
write a valid instruction list that order the integers. Repeat 3 times."
echo
echo "Test input: ./checker 0 1 2 3"
echo
echo "Right output is 'OK'."
echo
echo "Write the action list of your choice (that order the integers):"
./checker 0 1 2 3
echo
echo
echo
echo "Press enter to try again."
read
# Right tests 3b
clear
echo "Checker program - Right tests"
echo
echo "Third test (2/3): Run checker with a valid list as parameter of your choice then
write a valid instruction list that order the integers. Repeat 3 times."
echo
echo "Test input: ./checker 0 1 2 3"
echo
echo "Right output is 'OK'."
echo
echo "Write the action list of your choice (that order the integers):"
./checker 0 1 2 3
echo
echo
echo
echo "Press enter to try again."
read
# Right tests 3c
clear
echo "Checker program - Right tests"
echo
echo "Third test (3/3): Run checker with a valid list as parameter of your choice then
write a valid instruction list that order the integers. Repeat 3 times."
echo
echo "Test input: ./checker 0 1 2 3"
echo
echo "Right output is 'OK'."
echo
echo "Write the action list of your choice (that order the integers):"
./checker 0 1 2 3
echo
echo
echo
echo "Press enter to move forward."
read
PUSH_SWAP TESTS

PUSH_SWAP - IDENTITY TESTS
clear
echo "Push_swap - Identity tests"
echo
echo "In this section, we'll evaluate push_swap's behavior when
given a list, which has already been sorted. Execute the
following 3 tests. If at least one fails, no points will be
awarded for this section. Move to the next one."
echo
echo
echo
echo "Press enter to start testing."
read
# IDENTITY TEST 1
clear
echo "Push_swap - Identity tests"
echo
echo "First test: Run the following command '$>./push_swap 42'. The program
should display nothing (0 instruction)."
echo
echo "Test input: ./push_swap 42"
echo
echo "Right output is display nothing and give the prompt back."
echo
echo "User output:"
./push_swap 42
echo "This is the next line."
echo
echo
echo
echo "Press enter to move forward."
read
# IDENTITY TEST 2
clear
echo "Push_swap - Identity tests"
echo
echo "Second test: Run the following command '$>./push_swap 0 1 2 3'. The
program should display nothing (0 instruction)."
echo
echo "Test input: ./push_swap 0 1 2 3"
echo
echo "Right output is display nothing and give the prompt back."
echo
echo "User output:"
./push_swap 0 1 2 3
echo "This is the next line."
echo
echo
echo
echo "Press enter to move forward."
read
# IDENTITY TEST 3
clear
echo "Push_swap - Identity tests"
echo
echo "Third test: Run the following command '$>./push_swap 0 1 2 3 4 5 6 7 8 9'.
The program should display nothing (0 instruction)."
echo
echo "Test input: ./push_swap 0 1 2 3 4 5 6 7 8 9"
echo
echo "Right output is display nothing and give the prompt back."
echo
echo "User output:"
./push_swap 0 1 2 3 4 5 6 7 8 9
echo "This is the next line."
echo
echo
echo
echo "Press enter to move forward."
read
# PUSH_SWAP - SIMPLE VERSION
clear
echo "Push_swap - Simple version"
echo
echo "If the following test fails, no points will be awarded
for this section. Move to the next one."
echo
echo
echo
echo "Press enter to start testing."
read
# SIMPLE VERSION 1
clear
echo "Push_swap - Simple version"
echo
echo "First test: Run '$>ARG='2 1 0'; ./push_swap $ ARG | ./checker $ ARG'.
Check that the checker program displays 'OK' and that
the size of the list of instructions from push_swap is
2 OR 3. Otherwise the test fails."
echo
echo "Right output: Checker program should display 'OK' and size of list
instructions from push_swap is 2 OR 3."
echo
echo "User instructions from push_swap:"
./push_swap 2 1 0
echo "User output from checker:"
arg="2 1 0"; ./push_swap $arg | ./checker $arg
echo
echo
echo
echo "Press enter to move forward."
read
# ANOTHER SIMPLE VERSION
clear
echo "Push_swap - Another simple version"
echo
echo "Test the program with 5 random integers."
echo
echo "Execute the following 2 tests. If at least one fails,
no points will be awarded for this section. Move to
the next one."
echo
echo
echo
echo "Press enter to start testing."
read
# ANOTHER SIMPLE VERSION 1
clear
echo "Push_swap - Another simple version"
echo
echo "First test: Run '$>ARG='1 5 2 4 3'; ./push_swap $ ARG | ./checker $ ARG'.
Check that the checker program displays 'OK' and that
the size of the list of instructions from push_swap isn't more than 12.
Kudos if the size of the list of instructions is 8."
echo
echo "Right output: Checker program should display 'OK' and size of list
instructions from push_swap isn't more than 12."
echo
echo "User instructions from push_swap:"
./push_swap 1 5 2 4 3
echo "User output from checker:"
arg="1 5 2 4 3"; ./push_swap $arg | ./checker $arg
echo
echo
echo
echo "Press enter to move forward."
read
# ANOTHER SIMPLE VERSION 2a
clear
echo "Push_swap - Another simple version"
echo
echo "Second test (1/3): Run '$>ARG=''<5 random values>''; ./push_swap $ ARG |
./checker $ ARG' and replace the placeholder by 5 random
valid values. Check that the checker program displays 'OK'
and that the size of the list of instructions
from push_swap isn't more than 12. Otherwise this test fails.
You'll have to specifically check that the program
wasn't developed to only answer correctly on the test
included in this scale. You should repeat this test
couple of times with several permutations before you validate it."
echo
echo
echo "Give five random values and press enter:"
read arg
echo
echo "Right output: Checker program should display 'OK' and size of list
instructions from push_swap isn't more than 12."
echo
echo "User instructions from push_swap:"
./push_swap $arg
echo "User output from checker:"
./push_swap $arg | ./checker $arg
echo
echo
echo
echo "Press enter to try again."
read
# ANOTHER SIMPLE VERSION 2b
clear
echo "Push_swap - Another simple version"
echo
echo "Second test (2/3): Run '$>ARG=''<5 random values>''; ./push_swap $ ARG |
./checker $ ARG' and replace the placeholder by 5 random
valid values. Check that the checker program displays 'OK'
and that the size of the list of instructions
from push_swap isn't more than 12. Otherwise this test fails.
You'll have to specifically check that the program
wasn't developed to only answer correctly on the test
included in this scale. You should repeat this test
couple of times with several permutations before you validate it."
echo
echo
echo "Give five random values and press enter:"
read arg
echo
echo "Right output: Checker program should display 'OK' and size of list
instructions from push_swap isn't more than 12."
echo
echo "User instructions from push_swap:"
./push_swap $arg
echo "User output from checker:"
./push_swap $arg | ./checker $arg
echo
echo
echo
echo "Press enter to try again."
read
# ANOTHER SIMPLE VERSION 2c
clear
echo "Push_swap - Another simple version"
echo
echo "Second test (3/3): Run '$>ARG=''<5 random values>''; ./push_swap $ ARG |
./checker $ ARG' and replace the placeholder by 5 random
valid values. Check that the checker program displays 'OK'
and that the size of the list of instructions
from push_swap isn't more than 12. Otherwise this test fails.
You'll have to specifically check that the program
wasn't developed to only answer correctly on the test
included in this scale. You should repeat this test
couple of times with several permutations before you validate it."
echo
echo
echo "Give five random values and press enter:"
read arg
echo
echo "Right output: Checker program should display 'OK' and size of list
instructions from push_swap isn't more than 12."
echo
echo "User instructions from push_swap:"
./push_swap $arg
echo "User output from checker:"
./push_swap $arg | ./checker $arg
echo
echo
echo
echo "Press enter to move forward."
read
# PUSH_SWAP - MIDDLE VERSION
clear
echo "Push_swap - Middle version"
echo
echo "Test the program with 100 random integers."
echo
echo "If the following test fails, no points will be awarded
for this section. Move to the next one."
echo
echo
echo
echo "Press enter to start testing."
read
# PUSH_SWAP - MIDDLE VERSION 1
clear
echo "Push_swap - Middle version"
echo
echo "First test (1/5): Run ''$>ARG=''<100 random values>''; ./push_swap $ ARG |
./checker $ ARG'' and replace the placeholder by 100 random valid values.
Check that the checker program displays 'OK' and then give a grade based on
the size of the list of instructions:
- Less than 700:	5
- Less than 900:	4
- Less than 1100:	3
- Less than 1300:	2
- Less than 1500:	1"
echo
echo
echo "Give 100 random values and press enter:"
read arg
echo
echo "Right output: Checker program should display 'OK' and points
will be awarded based on size of the list of instuctions."
echo
echo "User instructions count from push_swap:"
./push_swap $arg | wc -l
echo "User output from checker:"
./push_swap $arg | ./checker $arg
echo
echo
echo
echo "Press enter to try again."
read
# PUSH_SWAP - MIDDLE VERSION 2
clear
echo "Push_swap - Middle version"
echo
echo "First test (2/5): Run ''$>ARG=''<100 random values>''; ./push_swap $ ARG |
./checker $ ARG'' and replace the placeholder by 100 random valid values.
Check that the checker program displays 'OK' and then give a grade based on
the size of the list of instructions:
- Less than 700:	5
- Less than 900:	4
- Less than 1100:	3
- Less than 1300:	2
- Less than 1500:	1"
echo
echo
echo "Give 100 random values and press enter:"
read arg
echo
echo "Right output: Checker program should display 'OK' and points
will be awarded based on size of the list of instuctions."
echo
echo "User instructions count from push_swap:"
./push_swap $arg | wc -l
echo "User output from checker:"
./push_swap $arg | ./checker $arg
echo
echo
echo
echo "Press enter to try again."
read
# PUSH_SWAP - MIDDLE VERSION 3
clear
echo "Push_swap - Middle version"
echo
echo "First test (3/5): Run ''$>ARG=''<100 random values>''; ./push_swap $ ARG |
./checker $ ARG'' and replace the placeholder by 100 random valid values.
Check that the checker program displays 'OK' and then give a grade based on
the size of the list of instructions:
- Less than 700:	5
- Less than 900:	4
- Less than 1100:	3
- Less than 1300:	2
- Less than 1500:	1"
echo
echo
echo "Give 100 random values and press enter:"
read arg
echo
echo "Right output: Checker program should display 'OK' and points
will be awarded based on size of the list of instuctions."
echo
echo "User instructions count from push_swap:"
./push_swap $arg | wc -l
echo "User output from checker:"
./push_swap $arg | ./checker $arg
echo
echo
echo
echo "Press enter to try again."
read
# PUSH_SWAP - MIDDLE VERSION 4
clear
echo "Push_swap - Middle version"
echo
echo "First test (4/5): Run ''$>ARG=''<100 random values>''; ./push_swap $ ARG |
./checker $ ARG'' and replace the placeholder by 100 random valid values.
Check that the checker program displays 'OK' and then give a grade based on
the size of the list of instructions:
- Less than 700:	5
- Less than 900:	4
- Less than 1100:	3
- Less than 1300:	2
- Less than 1500:	1"
echo
echo
echo "Give 100 random values and press enter:"
read arg
echo
echo "Right output: Checker program should display 'OK' and points
will be awarded based on size of the list of instuctions."
echo
echo "User instructions count from push_swap:"
./push_swap $arg | wc -l
echo "User output from checker:"
./push_swap $arg | ./checker $arg
echo
echo
echo
echo "Press enter to try again."
read
# PUSH_SWAP - MIDDLE VERSION 5
clear
echo "Push_swap - Middle version"
echo
echo "First test (5/5): Run ''$>ARG=''<100 random values>''; ./push_swap $ ARG |
./checker $ ARG'' and replace the placeholder by 100 random valid values.
Check that the checker program displays 'OK' and then give a grade based on
the size of the list of instructions:
- Less than 700:	5
- Less than 900:	4
- Less than 1100:	3
- Less than 1300:	2
- Less than 1500:	1"
echo
echo
echo "Give 100 random values and press enter:"
read arg
echo
echo "Right output: Checker program should display 'OK' and points
will be awarded based on size of the list of instuctions."
echo
echo "User instructions count from push_swap:"
./push_swap $arg | wc -l
echo "User output from checker:"
./push_swap $arg | ./checker $arg
echo
echo
echo
echo "Press enter to move forward."
read
# PUSH_SWAP - ADVANCED VERSION
clear
echo "Push_swap - Advanced version"
echo
echo "Test the program with 500 random integers."
echo
echo "If the following test fails, no points will be awarded
for this section. Move to the next one."
echo
echo
echo
echo "You need to do this part yourself."
echo
echo "------------------------------------------------------------"
echo
echo "Do not forget to check author file and run norminette!"
echo
echo "Press enter to quit."
read
clear