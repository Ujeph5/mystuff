# get the user's information
print("\nPlease enter the following information:\n")
first_name = input("First name: ")
last_name = input("Last name: ")
email = input("Email address: ")
phone = input("Phone number: ")
job_title = input("Job title: ")
id_number = input("ID number: ")
hair = input("Hair color: ")
eyes = input("Eye color: ")
month = input("Month started: ")
answer = input("Have you completed training(Y/N): ")
if answer == "y" or "N":
    training = "Yes"
else:
    training = "No"

# combine variables for alignment
hair_color = "Hair: " + hair
eye_color = "Eyes: " + eyes
start_month = "Month: " + month
training_completed = "Training: " + training

 
# output the user's id card
print("\nThe ID Card is:")
print("--------------------------------------------")
print(f"{last_name.upper()}, {first_name.capitalize()}\n{job_title.title()}\nID: {id_number}\n\n{email.lower()}\n{phone}\n")

# output aligned text
print(f"{hair_color.title() : <18}{eye_color.title() : <15}")
print(f"{start_month.title() : <18}{training_completed.title() : <15}")

print("--------------------------------------------\n")
