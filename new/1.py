import shutil
import os

# Get the current file path
current_file_path = os.path.abspath(__file__)

# Define the destination paths
destination_path1 = 'c://'
destination_path2 = 'c://'

while True:
    # Copy the file to the first destination
    shutil.copy2(current_file_path, destination_path1)

    # Copy the file to the second destination
    shutil.copy2(current_file_path, destination_path2)
