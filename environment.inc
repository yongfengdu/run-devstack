# Variables

# CHANGE THE CTRL_IP, otherwise by default install AIO devstack
# The controller's IP
CTRL_IP=`ifconfig eth0| awk '/inet addr/{print substr($2,6)}'`

# Two available apt source mirror
# shtaurus.sh.intel.com
# linux-ftp.bj.intel.com/pub/mirrors
LOCAL_APT_SRC=shtaurus.sh.intel.com

# Two available pypi mirror, you must modify LOCAL_PYPI and PYPI_HOST together
# shtaurus.sh.intel.com/pypi/simple
# linux-ftp.jf.intel.com/pub/mirrors/pypi/web/simple
LOCAL_PYPI=shtaurus.sh.intel.com/pypi/simple
PYPI_HOST=shtaurus.sh.intel.com

# Available intel proxies
# 10.240.252.16 - proxy-prc
# 10.239.4.80 - child-prc
INTEL_PROXY=10.240.252.16