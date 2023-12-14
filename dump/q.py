# Initialize a variable to store the sum of marks
sum_marks = 0.0

# Repeat for each of the 5 students
for i in range(5):
    # Prompt the user to enter the marks for the current student
    marks = float(input(f"Enter marks for student {i+1}: "))
    
    # Add the marks to the sum
    sum_marks += marks

# Calculate the mean marks
mean_marks = sum_marks / 5

# Display the mean marks
print(f"The mean marks of the 5 students is: {mean_marks}")
