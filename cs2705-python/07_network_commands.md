# Network troubleshooting lab

## Ping

| address           | IP address     | avg round-trip (ms) |
| www.novell.com    | 130.57.66.5    |  118.179            |
| www.microsoft.com | 184.27.222.115 |   51.042            |
| www.google.com    | 172.217.4.228  |   48.733            |
| www.facebook.com  | 157.240.2.35   |   48.996            |
| www.yahoo.com     | 98.138.219.232 |   62.693            |

`ping` can be useful to determine whether or not an issue is specific to the
local device or network configuration, as opposed to external devices or servers.
It is a lightweight, first-stop utility in network troubleshooting.

## Traceroute

| address           | # of hops | average time (ms) |
| www.novell.com    |  11       |  48.677           |
| www.microsoft.com |   7       |  45.874           |
| www.google.com    |   9       |  51.913           |
| www.facebook.com  |   8       |  52.491           |
| www.yahoo.com     |   9       |  55.562           |

`traceroute` is useful to determine exactly where along the line a request fails,
as well as to help determine the point of highest latency during a packet's route,
which can also be used to help isolate issues with network configuration, or
indicate whether issues with the configuration are outside of a local admin's
control.

## traceroute-online.com

| address           | # of hops | average time | final geolocation |
| www.novell.com    |  13       |  30.03       |  UT, USA          |
| www.microsoft.com |   4       |  42.35       |  NJ, USA          |
| www.google.com    |   7       |   1.80       |  Google Cloud     |
| www.facebook.com  |   6       |   1.35       |  NJ, USA          |
| www.yahoo.com     |   9       |   7.51       |  NJ, USA          |

I like the visual feature, but a big disadvantage of using the website (I could
not get the macOS Open Visual Traceroute software to run) is that it uses the
website's IP address as the origin for the packets, instead of my local address.
I might see very different routing for the packets if I were using my local IP
instead of the IP that the website's server has.