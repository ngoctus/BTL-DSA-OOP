#include <iostream>
#include "map.hpp"
//#include "edge.hpp"
using namespace std;
using namespace map_types;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	map q1;
	
	//cac dia diem
	q1.add_node(unique_ptr<node>(new location("Dinh doc lap", 11, 106.69655, 10.78251, 500, lo_type::TOURIST_ATTRACTION)));
	q1.add_node(unique_ptr<node>(new location("Thao cam vien", 12, 106.70779, 10.78841, 1000, lo_type::TOURIST_ATTRACTION)));
	q1.add_node(unique_ptr<node>(new location("Cong vien 23/9", 13, 106.69234, 10.76876, 1000, lo_type::TOURIST_ATTRACTION)));
	q1.add_node(unique_ptr<node>(new location("Toa Bitexco", 14, 106.70437, 10.77172, 1500, lo_type::LANDMARK)));
	q1.add_node(unique_ptr<node>(new location("Nha tho duc ba", 15, 106.69900, 10.77992, 300, lo_type::TOURIST_ATTRACTION)));
	q1.add_node(unique_ptr<node>(new location("Cho Ben Thanh", 16, 106.69805, 10.77265, 750, lo_type::TOURIST_ATTRACTION)));
	q1.add_node(unique_ptr<node>(new location("Pho Ong Cat Gia Truyen Since 1988", 17, 106.69309, 10.76851, 25, lo_type::RESTAURANT)));
	q1.add_node(unique_ptr<node>(new location("Nori - Modern Izakaya", 18, 106.69690, 10.77403, 50, lo_type::RESTAURANT)));
	q1.add_node(unique_ptr<node>(new location("Trung tam bao hanh Asus", 19, 106.68918, 10.77317, 75, lo_type::OTHERS)));
	
	//cac giao lo
	q1.add_node(unique_ptr<node>(new junction("GL_DDL1", 101, 106.69305, 10.77735, junction_type::UNDEFINED)));
	q1.add_node(unique_ptr<node>(new junction("GL_DDL2", 102, 106.69500, 10.77956, junction_type::UNDEFINED)));
	q1.add_node(unique_ptr<node>(new junction("GL_DDL3", 103, 106.69798, 10.77680, junction_type::UNDEFINED)));
	q1.add_node(unique_ptr<node>(new junction("GL_DDL4", 104, 106.69605, 10.77475, junction_type::UNDEFINED)));
	
	
	
	
	q1.add_edge_by_id("Duong Huyen Tran Cong Chua", 101104, 101, 104, 0);
//	q1.add_edge_by_id("Duong Nguyen Hue", 1512, 15, 12, 0);
//	q1.add_edge_by_id("Duong ABC", 1513, 15, 13, 0);
//	q1.add_edge_by_id("Duong ABCD", 1514, 15, 14, 1);
	
//    m.add_node(unique_ptr<node>(new node("A", 1, 2, 3)));
//	m.add_node(unique_ptr<node>(new location("B", 2, 4, 5, 20, lo_type::RESTAURANT)));
//	m.add_edge(unique_ptr<edge>(new edge("AB", 11, 1, 2, 22, 1)));
//	m.add_edge_by_id("Duong AB", 707, 7, 3, 0);
//	m.add_edge_by_id("Duong AB", 707, 1, 2, 0);

    q1.show_all();
    
	return 0;
}
