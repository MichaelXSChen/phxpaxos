#!/usr/bin/env python

import subprocess
import os
import sys

os.system('killall -9 phx_paxos_bench')
os.system('rm -rf logpath_127.0.0.1_1*')


def run_bench(num):
    print('start running with %d nodes' % num);
    nodes = ['127.0.0.1:%d' % (i+10000) for i in range(0, num)]
    all_nodes_str = ','.join(nodes)
    for node in nodes[:-1]:
        subprocess.Popen(['./phx_paxos_bench', node, all_nodes_str, 'n', '1'])
    os.system('./phx_paxos_bench ' + nodes[-1] + ' ' + all_nodes_str + ' y 1')
    

if (len(sys.argv) != 2):
    print('Please specify node number')
    exit(-1)
else:
    try:
        node_num = int(sys.argv[1])
    except:
        print('Please input valid node number')
        exit(-1)
    run_bench(node_num)


# subprocess.Popen(['./phx_paxos_bench', '127.0.0.1:11111', '127.0.0.1:11111,127.0.0.1:12111,127.0.0.1:13111', 'n', '1'])
# subprocess.Popen(['./phx_paxos_bench', '127.0.0.1:12111', '127.0.0.1:11111,127.0.0.1:12111,127.0.0.1:13111', 'n', '1'])
# subprocess.Popen(['./phx_paxos_bench', '127.0.0.1:13111', '127.0.0.1:11111,127.0.0.1:12111,127.0.0.1:13111', 'y', '1'])

