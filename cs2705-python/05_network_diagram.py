import ipaddress
import time

# University Level - Weber State
ipInterface = ipaddress.ip_interface('138.191.0.0/16')
ipnetwork = ipInterface.network

college = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff=4))

subnet_divisions = [
    'Applied Science & Technology',
    'Arts & Humanities',
    'Education',
    'Business & Economics',
    'Health',
    'Science',
    'Social & Behavioral Science',
    'Information Technology',
    'Student Affairs',
    'Facilities Management',
    'Administrative Services'
]

departments = [
    ['Computer Science', 'Professional Sales',
        'Manufacturing Engineering', 'Construction Management', 'Automotive Technology', 'Network Technology', 'Web Design', 'Engineering'],
    ['Korean', 'German', 'Spanish',
        'French', 'English', 'Visual Arts', 'Performing Arts', 'Communications'],
    ['Child & Family Studies', 'Health Promotion',
        'Athletic Training', 'Human Performance', 'Teacher Education', 'Exercise Physiology', 'Health Education', 'Recreation Management'],
    ['Business Administration', 'Economics',
        'Information Systems Tech', 'Master of Business Admin', 'Accounting', 'Business Education', 'Master of Accountancy', 'Master of Taxation'],
    ['Dental Hygiene', 'Emergency Care', 'Health Information Mgmt',
        'Nursing', 'Medical Laboratory', 'Radiology', 'Respiratory Therapy', 'Occupational Therapy'],
    ['Botany', 'Geosciences', 'Microbiology',
        'Developmental Math', 'Physics', 'Zoology', 'Mathematics', 'Human Anatomy Physiology'],
    ['Criminal Justice', 'Geography', 'History',
        'Military Science', 'Philosophy & Poli Sci', 'Psychology', 'Social Work', 'Sociology & Anthropology'],
    ['Computing Support', 'Telecommunications', 'Administrative Computing', 'Networking',
        'Academic Computing', 'Computer Security', 'Database Administration', 'VP of IT Office'],
    ['Student Life', 'Student Services', 'Outreach', 'Academic Support',
        'Focused Interest', 'Career Services', 'Veterans Affairs', 'Diversity'],
    ['Campus Planning', 'Construction', 'Custodial', 'Landscaping',
        'Electrical', 'Mechanical', 'Business Services', 'Parking Services'],
    ['Athletics', 'Accounting', 'Budget', 'Enviro Health & Safety',
        'Printing', 'Human Resources', 'Purchasing', 'Police & Security']
]

print('')
print('Weber State University')
print('-------------------------------')
print('')

for i in range(0, len(subnet_divisions)):
    print(subnet_divisions[i])
    print('\t Network address and subnet mask is ', college[i])
    print('\t Valid host address range: {0} - {1}'.format((((college[i])).network_address)+1,
                                                          ((((college[i]).broadcast_address)-1))))
    print('')

time.sleep(1)

for i in range(0, len(subnet_divisions)):
    ipInterface = ipaddress.ip_interface(college[i])
    ipnetwork = ipInterface.network
    division = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff=3))

    print('')
    print(subnet_divisions[i])
    print('-------------------------------')

    for j in range(0, len(departments[i])):
        print('')
        print(departments[i][j])
        print('\t Network address and subnet mask is ', division[j])
        print('\t Valid host address range: {0} - {1}'.format(
            (((division[j])).network_address)+1, ((((division[j].broadcast_address)-1)))))

    time.sleep(1)
