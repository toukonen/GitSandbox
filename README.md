# ProjectStructureExample
You need to generate SSH public/private keypair before you can clone repository via ssh protocol Add ssh key for clong repository

Generate new key pair:

Open Git Bash.
Go to .ssh folder
Paste the text below, substituting in your GitHub email address. a. ssh-keygen -t ed25519 -C "your_email@example.com"
Enter a file in which to save the key
Enter passphrase (can be empty)
Copy a new key to the clipboard a. clip < your_key_name.pub b. You need that when you add the key to github
Add the key to Github

Login to github.com
Go to Settings -> SSH and GBG keys
Click "New SSH Key"
Add name you want and paste key from clipboard
Convert ssh pub key to puttykey

Istall putty if not exist
Open PuTTyGen
Click Conversion -> Import key a. Open new key from folder C:\Users\your_name.ssh
Click save private key a. Add key to folder where you can use it
Cloning repository

If you use tortoiseGit
Clone repository
Check "Load Putty Key" check box
Select puttykey you created before
Clone reposity normally
