import subprocess

print("Begin Ping Processes")

print("=======================================================================")
print("www.microsoft.com")
print("=======================================================================")
subprocess.call(["ping", "-c 4", "www.microsoft.com"])

print()
print("=======================================================================")
print("www.novell.com")
print("=======================================================================")
subprocess.call(["ping", "-c 4", "www.novell.com"])

print()
print("=======================================================================")
print("www.yahoo.com")
print("=======================================================================")
subprocess.call(["ping", "-c 4", "www.yahoo.com"])

print()
print("=======================================================================")
print("www.sun.com")
print("=======================================================================")
subprocess.call(["ping", "-c 4", "www.sun.com"])

print()
print("=======================================================================")
print("www.microfocus.com")
print("=======================================================================")
subprocess.call(["ping", "-c 4", "www.microfocus.com"])
