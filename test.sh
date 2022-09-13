# clear
# echo "Checker program - Error management"
# echo
# echo "In first section, we'll evaluate the checker's error management.
# If at least one fails, no points will be awarded for this
# section. Move to the next one."
# echo
# echo
# echo
# echo "Press enter to start testing."
# read
# # Error management 1
# clear
# echo "Checker program - Error management"
# echo
# echo "First test: Run checker with non numeric parameters."
# echo
# echo "Test input: ./checker a b c"
# echo
# echo "Right output is 'Error'."
# echo
# echo "User output:"
# ./checker a b c
# echo
# echo
# echo
# echo "Press enter to move forward."
# read
# # Error management 2
# clear
# echo "Checker program - Error management"
# echo
# echo "Second test: Run checker with a duplicate numeric parameter."
# echo
# echo "Test input: ./checker 1 2 4 42 1"
# echo
# echo "Right output is 'Error'."
# echo
# echo "User output:"
# ./checker 1 2 4 42 1
# echo
# echo
# echo
# echo "Press enter to move forward."
# read
# # Error management 3
# clear
# echo "Checker program - Error management"
# echo
# echo "Third test: Run checker with only numeric parameters including one
# greater than MAXINT."
# echo
# echo "Test input: ./checker 1 2 3 4 2147483648"
# echo
# echo "Right output is 'Error'."
# echo
# echo "User output:"
# ./checker 1 2 3 4 2147483648
# echo
# echo
# echo
# echo "Press enter to move forward."
# read
# # Error management 4
# clear
# echo "Checker program - Error management"
# echo
# echo "4th test: Run checker without any parameters. The program must
# not display anything and give the prompt back."
# echo
# echo "Test input: ./checker"
# echo
# echo "Right output is display nothing and give the prompt back."
# echo
# echo "User output:"
# ./checker
# echo "This is the next line."
# echo
# echo
# echo
# echo "Press enter to move forward."
# read
# # Error management 5
# clear
# echo "Checker program - Error management"
# echo
# echo "5th test: Run checker with valid parameters, and write an action that
# doesn't exist during the instruction phase."
# echo
# echo "Test input: ./checker 1 2 3 42 420 666"
# echo
# echo "Right output is 'Error'."
# echo
# echo "Write an action that doesn't exist: (for example: pc)"
# ./checker 1 2 3 42 420 666
# echo
# echo
# echo
# echo "Press enter to move forward."
# read
# # Error management 6
# clear
# echo "Checker program - Error management"
# echo
# echo "6th test: Run checker with valid parameters, and write an action with
# one or several spaces before and/or after the action during
# the instruction phase."
# echo
# echo "Test input: ./checker 1 2 3 42 420 666"
# echo
# echo "Right output is 'Error'."
# echo
# echo "Write an action with one or several spaces before the action: (for example: ' pb')"
# ./checker 1 2 3 42 420 666
# echo
# echo "Write an action with one or several spaces after the action: (for example: 'pb ')"
# ./checker 1 2 3 42 420 666
# echo
# echo
# echo
# echo "Press enter to move forward."
# read
# # Error management 7
# clear
# echo "Checker program - Error management"
# echo
# echo "7th test: Run checker with only numeric parameters including one
# smaller than MININT."
# echo
# echo "Test input: ./checker 1 2 3 4 -2147483649"
# echo
# echo "Right output is 'Error'."
# echo
# echo "User output:"
# ./checker 1 2 3 4 -2147483649
# echo
# echo
# echo
# echo "Press enter to move forward."
# read
# # FALSE TESTS
# clear
# echo "Checker program - False tests"
# echo
# echo "In this section, we'll evaluate the checker's ability to manage
# a list of instructions that doesn't sort the list. Execute the
# following 2 tests. If at least one fails, no points will be awarded
# for this section. Move to the next one."
# echo
# echo "Don't forget to press CTRL+D to stop reading during the
# intruction phase."
# echo
# echo
# echo
# echo "Press enter to move forward."
# read
# # False tests 1
# clear
# echo "Checker program - False tests"
# echo
# echo "First test: Run checker with the following command '$>./checker 0 9 1 8 2
# 7 3 6 4 5' then write the following valid action list [sa, pb, rrr]."
# echo
# echo "Test input: ./checker 0 9 1 8 2 7 3 6 4 5"
# echo
# echo "Right output is 'KO'."
# echo
# echo "Write the following valid action list [sa, pb, rrr]:"
# ./checker 0 9 1 8 2 7 3 6 4 5
# echo
# echo
# echo
# echo "Press enter to move forward."
# read
# # False tests 2a
# clear
# echo "Checker program - False tests"
# echo
# echo "Second test: Run checker with a valid list as parameter of your choice then
# write a valid instruction list that doesn't order the integers.
# Checker should display 'KO'. You'll have to specifically check
# that the program wasn't developed to only answer correctly
# on the test included in this scale. You should repeat this
# test couple of times with several permutations before you
# validate it.."
# echo
# echo "Test input: ./checker 666 0 -42 200 -420 420 500"
# echo
# echo "Right output is 'KO'."
# echo
# echo "Write the following action list [ra]:"
# ./checker 666 0 -42 200 -420 420 500
# echo
# echo
# echo
# echo "Press enter to try again."
# read
# # False tests 2b
# clear
# echo "Checker program - False tests"
# echo
# echo "Second test: Run checker with a valid list as parameter of your choice then
# write a valid instruction list that doesn't order the integers.
# Checker should display 'KO'. You'll have to specifically check
# that the program wasn't developed to only answer correctly
# on the test included in this scale. You should repeat this
# test couple of times with several permutations before you
# validate it.."
# echo
# echo "Test input: ./checker 666 0 -42 200 -420 420 500"
# echo
# echo "Right output is 'KO'."
# echo
# echo "Write the action list of your choice (that doesn't order the integers):"
# ./checker 666 0 -42 200 -420 420 500
# echo
# echo
# echo
# echo "Press enter to try again."
# read
# # False tests 2c
# clear
# echo "Checker program - False tests"
# echo
# echo "Second test: Run checker with a valid list as parameter of your choice then
# write a valid instruction list that doesn't order the integers.
# Checker should display 'KO'. You'll have to specifically check
# that the program wasn't developed to only answer correctly
# on the test included in this scale. You should repeat this
# test couple of times with several permutations before you
# validate it.."
# echo
# echo "Test input: ./checker 1 2 3 4"
# echo
# echo "Right output is 'KO'."
# echo
# echo "Write the action list of your choice (that doesn't order the integers):"
# ./checker 1 2 3 4
# echo
# echo
# echo
# echo "Press enter to move forward."
# read
# # RIGHT TESTS
# clear
# echo "Checker program - Right tests"
# echo
# echo "In this section, we'll evaluate the checker's ability to manage
# a lists of instructions that sort the list. Execute the
# following 2 tests. If at least one fails, no points will
# be awarded for this section. Move to the next one."
# echo
# echo "Don't forget to press CTRL+D to stop reading during the
# intruction phase."
# echo
# echo
# echo
# echo "Press enter to move forward."
# read
# # Right tests 1
# clear
# echo "Checker program - Right tests"
# echo
# echo "First test: Run checker with the following command '$>./checker 0 1 2'
# then press CTRL+D without writing any instruction."
# echo
# echo "Test input: ./checker 0 1 2"
# echo
# echo "Right output is 'OK'."
# echo
# echo "Press CTRL+D without writing any instructions:"
# ./checker 0 1 2
# echo
# echo
# echo
# echo "Press enter to move forward."
# read
# # Right tests 2
# clear
# echo "Checker program - Right tests"
# echo
# echo "Second test: Run checker with the following command '$>./checker 0 9 1 8 2'
# then write the following valid action list [pb, ra, pb, ra, sa, ra, pa, pa]."
# echo
# echo "Test input: ./checker 0 9 1 8 2"
# echo
# echo "Right output is 'OK'."
# echo
# echo "Write the following action list [pb, ra, pb, ra, sa, ra, pa, pa]:"
# ./checker 0 9 1 8 2
# echo
# echo
# echo
# echo "Press enter to move forward."
# read
# # Right tests 3a
# clear
# echo "Checker program - Right tests"
# echo
# echo "Third test: Run checker with a valid list as parameter of your choice then
# write a valid instruction list that order the integers. Repeat 3 times."
# echo
# echo "Test input: ./checker 0 1 2 3"
# echo
# echo "Right output is 'OK'."
# echo
# echo "Write the action list of your choice (that order the integers):"
# ./checker 0 1 2 3
# echo
# echo
# echo
# echo "Press enter to try again."
# read
# # Right tests 3b
# clear
# echo "Checker program - Right tests"
# echo
# echo "Third test: Run checker with a valid list as parameter of your choice then
# write a valid instruction list that order the integers. Repeat 3 times."
# echo
# echo "Test input: ./checker 0 1 2 3"
# echo
# echo "Right output is 'OK'."
# echo
# echo "Write the action list of your choice (that order the integers):"
# ./checker 0 1 2 3
# echo
# echo
# echo
# echo "Press enter to try again."
# read
# # Right tests 3c
# clear
# echo "Checker program - Right tests"
# echo
# echo "Third test: Run checker with a valid list as parameter of your choice then
# write a valid instruction list that order the integers. Repeat 3 times."
# echo
# echo "Test input: ./checker 0 1 2 3"
# echo
# echo "Right output is 'OK'."
# echo
# echo "Write the action list of your choice (that order the integers):"
# ./checker 0 1 2 3
# echo
# echo
# echo
# echo "Press enter to move forward."
# read
# PUSH_SWAP TESTS
#
# PUSH_SWAP - IDENTITY TESTS
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
echo "Second test: Run the following command '$>./push_swap 0 1 2 3 4 5 6 7 8 9'.
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
echo "Second test: Run '$>ARG=''<5 random values>''; ./push_swap $ ARG |
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
echo "Second test: Run '$>ARG=''<5 random values>''; ./push_swap $ ARG |
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
echo "Second test: Run '$>ARG=''<5 random values>''; ./push_swap $ ARG |
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
echo "Press enter to moce forward."
read
# PUSH_SWAP - MIDDLE VERSION
clear
echo "Push_swap - Middle version"
echo
echo "If the following test fails, no points will be awarded
for this section. Move to the next one."
echo
echo
echo
echo "Press enter to start testing."
read
# PUSH_SWAP - MIDDLE VERSION
clear
echo "Push_swap - Another simple version"
echo
echo "First test: Run ''$>ARG=''<100 random values>''; ./push_swap $ ARG |
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