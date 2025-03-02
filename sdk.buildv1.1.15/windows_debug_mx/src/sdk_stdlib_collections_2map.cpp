
#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_stdlib_collections_2map.h"

bbString bbDBType(t_stdlib_collections_Map_1ii_Node_Color*p){
  	return "stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node.Color";
}
bbString bbDBValue(t_stdlib_collections_Map_1ii_Node_Color*p){
  	return bbString( *(int*)p );
}

void t_stdlib_collections_Map_1ii_Node::gcMark(){
  bbGCMark(m__0left);
  bbGCMark(m__0right);
  bbGCMark(m__0parent);
}

void t_stdlib_collections_Map_1ii_Node::dbEmit(){
  puts( "[stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node]");
  bbDBEmit("_key",&m__0key);
  bbDBEmit("_value",&m__0value);
  bbDBEmit("_color",&m__0color);
  bbDBEmit("_left",&m__0left);
  bbDBEmit("_right",&m__0right);
  bbDBEmit("_parent",&m__0parent);
}

t_stdlib_collections_Map_1ii_Node::t_stdlib_collections_Map_1ii_Node(bbInt l_key,bbInt l_value,t_stdlib_collections_Map_1ii_Node_Color l_color,t_stdlib_collections_Map_1ii_Node* l_parent){
  bbDBFrame db_f{"new:Void(key:monkey.types.Int,value:monkey.types.Int,color:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node.Color,parent:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBLocal("color",&l_color);
  bbDBLocal("parent",&l_parent);
  bbDBStmt(278531);
  this->m__0key=l_key;
  bbDBStmt(282627);
  this->m__0value=l_value;
  bbDBStmt(286723);
  this->m__0color=l_color;
  bbDBStmt(290819);
  this->m__0parent=l_parent;
}
t_stdlib_collections_Map_1ii_Node::~t_stdlib_collections_Map_1ii_Node(){
}

void t_stdlib_collections_Map_1ii_Node::m_Value(bbInt l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Value:Void(value:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(204803);
  this->m__0value=l_value;
}

bbInt t_stdlib_collections_Map_1ii_Node::m_Value(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Value:monkey.types.Int()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(196611);
  return this->m__0value;
}

t_stdlib_collections_Map_1ii_Node* t_stdlib_collections_Map_1ii_Node::m_PrevNode(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    t_stdlib_collections_Map_1ii_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  bbDBFrame db_f{"PrevNode:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(397315);
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_Node* l_node{};
      void gcMark(){
        bbGCMark(l_node);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(401418);
    f1.l_node=this->m__0left.get();
    bbDBLocal("node",&f1.l_node);
    bbDBStmt(405508);
    {
      bbDBLoop db_loop;
      while(bbBool(f1.l_node->m__0right.get())){
        bbDBBlock db_blk;
        bbDBStmt(409605);
        f1.l_node=f1.l_node->m__0right.get();
      }
    }
    bbDBStmt(417796);
    return f1.l_node;
  }
  bbDBStmt(425993);
  f0.l_node=this;
  bbDBLocal("node",&f0.l_node);
  f0.l_parent=this->m__0parent.get();
  bbDBLocal("parent",&f0.l_parent);
  bbDBStmt(430083);
  {
    bbDBLoop db_loop;
    while((bbBool(f0.l_parent)&&(f0.l_node==f0.l_parent->m__0left.get()))){
      bbDBBlock db_blk;
      bbDBStmt(434180);
      f0.l_node=f0.l_parent;
      bbDBStmt(438276);
      f0.l_parent=f0.l_parent->m__0parent.get();
    }
  }
  bbDBStmt(446467);
  return f0.l_parent;
}

t_stdlib_collections_Map_1ii_Node* t_stdlib_collections_Map_1ii_Node::m_NextNode(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    t_stdlib_collections_Map_1ii_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  bbDBFrame db_f{"NextNode:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(331779);
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_Node* l_node{};
      void gcMark(){
        bbGCMark(l_node);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(335882);
    f1.l_node=this->m__0right.get();
    bbDBLocal("node",&f1.l_node);
    bbDBStmt(339972);
    {
      bbDBLoop db_loop;
      while(bbBool(f1.l_node->m__0left.get())){
        bbDBBlock db_blk;
        bbDBStmt(344069);
        f1.l_node=f1.l_node->m__0left.get();
      }
    }
    bbDBStmt(352260);
    return f1.l_node;
  }
  bbDBStmt(360457);
  f0.l_node=this;
  bbDBLocal("node",&f0.l_node);
  f0.l_parent=this->m__0parent.get();
  bbDBLocal("parent",&f0.l_parent);
  bbDBStmt(364547);
  {
    bbDBLoop db_loop;
    while((bbBool(f0.l_parent)&&(f0.l_node==f0.l_parent->m__0right.get()))){
      bbDBBlock db_blk;
      bbDBStmt(368644);
      f0.l_node=f0.l_parent;
      bbDBStmt(372740);
      f0.l_parent=f0.l_parent->m__0parent.get();
    }
  }
  bbDBStmt(380931);
  return f0.l_parent;
}

bbInt t_stdlib_collections_Map_1ii_Node::m_Key(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Key:monkey.types.Int()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(159747);
  return this->m__0key;
}

bbInt t_stdlib_collections_Map_1ii_Node::m_Count(bbInt l_n){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Count:monkey.types.Int(n:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("n",&l_n);
  bbDBStmt(307203);
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    l_n=(f1.t0=this->m__0left.get())->m_Count(l_n);
  }
  bbDBStmt(311299);
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    l_n=(f1.t0=this->m__0right.get())->m_Count(l_n);
  }
  bbDBStmt(315395);
  return (l_n+1);
}

t_stdlib_collections_Map_1ii_Node* t_stdlib_collections_Map_1ii_Node::m_Copy(t_stdlib_collections_Map_1ii_Node* l_parent){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"Copy:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node(parent:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("parent",&l_parent);
  bbDBStmt(462857);
  f0.l_node=bbGCNew<t_stdlib_collections_Map_1ii_Node>(this->m__0key,this->m__0value,this->m__0color,l_parent);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(466947);
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    f0.l_node->m__0left=(f1.t0=this->m__0left.get())->m_Copy(f0.l_node);
  }
  bbDBStmt(471043);
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    f0.l_node->m__0right=(f1.t0=this->m__0right.get())->m_Copy(f0.l_node);
  }
  bbDBStmt(475139);
  return f0.l_node;
}
bbString bbDBType(t_stdlib_collections_Map_1ii_Node**){
  return "stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node";
}
bbString bbDBValue(t_stdlib_collections_Map_1ii_Node**p){
  return bbDBObjectValue(*p);
}

void t_stdlib_collections_Map_1ii_Iterator::dbEmit(t_stdlib_collections_Map_1ii_Iterator*p){
  bbDBEmit("_node",&p->m__0node);
}

t_stdlib_collections_Map_1ii_Iterator::t_stdlib_collections_Map_1ii_Iterator(t_stdlib_collections_Map_1ii_Node* l_node){
  bbDBFrame db_f{"new:Void(node:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("node",&l_node);
  bbDBStmt(589827);
  (*this).m__0node=l_node;
}
t_stdlib_collections_Map_1ii_Iterator::~t_stdlib_collections_Map_1ii_Iterator(){
}

bbBool t_stdlib_collections_Map_1ii_Iterator::m_Valid(){
  bbDBFrame db_f{"Valid:monkey.types.Bool()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(524291);
  return bbBool((*this).m__0node.get());
}

t_stdlib_collections_Map_1ii_Node* t_stdlib_collections_Map_1ii_Iterator::m_Current(){
  bbDBFrame db_f{"Current:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(540675);
  return (*this).m__0node.get();
}

void t_stdlib_collections_Map_1ii_Iterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Bump:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(557059);
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_stdlib_collections_Map_1ii_Iterator::m_AtEnd(){
  bbDBFrame db_f{"AtEnd:monkey.types.Bool()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(507907);
  return ((*this).m__0node.get()==((t_stdlib_collections_Map_1ii_Node*)0));
}
bbString bbDBType(t_stdlib_collections_Map_1ii_Iterator*){
  return "stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Iterator";
}
bbString bbDBValue(t_stdlib_collections_Map_1ii_Iterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_stdlib_collections_Map_1ii_Iterator&x,const t_stdlib_collections_Map_1ii_Iterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_stdlib_collections_Map_1ii_Iterator&t){
  bbGCMark(t.m__0node);
}

void t_stdlib_collections_Map_1ii_KeyIterator::dbEmit(t_stdlib_collections_Map_1ii_KeyIterator*p){
  bbDBEmit("_node",&p->m__0node);
}

t_stdlib_collections_Map_1ii_KeyIterator::t_stdlib_collections_Map_1ii_KeyIterator(t_stdlib_collections_Map_1ii_Node* l_node){
  bbDBFrame db_f{"new:Void(node:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_KeyIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("node",&l_node);
  bbDBStmt(704515);
  (*this).m__0node=l_node;
}
t_stdlib_collections_Map_1ii_KeyIterator::~t_stdlib_collections_Map_1ii_KeyIterator(){
}

bbBool t_stdlib_collections_Map_1ii_KeyIterator::m_Valid(){
  bbDBFrame db_f{"Valid:monkey.types.Bool()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_KeyIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(638979);
  return bbBool((*this).m__0node.get());
}

bbInt t_stdlib_collections_Map_1ii_KeyIterator::m_Current(){
  bbDBFrame db_f{"Current:monkey.types.Int()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_KeyIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(655363);
  return (*this).m__0node.get()->m__0key;
}

void t_stdlib_collections_Map_1ii_KeyIterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Bump:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_KeyIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(671747);
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_stdlib_collections_Map_1ii_KeyIterator::m_AtEnd(){
  bbDBFrame db_f{"AtEnd:monkey.types.Bool()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_KeyIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(622595);
  return ((*this).m__0node.get()==((t_stdlib_collections_Map_1ii_Node*)0));
}
bbString bbDBType(t_stdlib_collections_Map_1ii_KeyIterator*){
  return "stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.KeyIterator";
}
bbString bbDBValue(t_stdlib_collections_Map_1ii_KeyIterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_stdlib_collections_Map_1ii_KeyIterator&x,const t_stdlib_collections_Map_1ii_KeyIterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_stdlib_collections_Map_1ii_KeyIterator&t){
  bbGCMark(t.m__0node);
}

void t_stdlib_collections_Map_1ii_MapKeys::dbEmit(t_stdlib_collections_Map_1ii_MapKeys*p){
  bbDBEmit("_map",&p->m__0map);
}

t_stdlib_collections_Map_1ii_MapKeys::t_stdlib_collections_Map_1ii_MapKeys(t_stdlib_collections_Map_1ii* l_map){
  bbDBFrame db_f{"new:Void(map:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_MapKeys*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("map",&l_map);
  bbDBStmt(884739);
  (*this).m__0map=l_map;
}
t_stdlib_collections_Map_1ii_MapKeys::~t_stdlib_collections_Map_1ii_MapKeys(){
}

t_stdlib_collections_Map_1ii_KeyIterator t_stdlib_collections_Map_1ii_MapKeys::m_All(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii* t0{};
    t_stdlib_collections_Map_1ii_Node* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"All:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.KeyIterator()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_MapKeys*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(851971);
  return t_stdlib_collections_Map_1ii_KeyIterator{f0.t1=(f0.t0=(*this).m__0map.get())->m_FirstNode()};
}
bbString bbDBType(t_stdlib_collections_Map_1ii_MapKeys*){
  return "stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.MapKeys";
}
bbString bbDBValue(t_stdlib_collections_Map_1ii_MapKeys*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_stdlib_collections_Map_1ii_MapKeys&x,const t_stdlib_collections_Map_1ii_MapKeys&y){
  if(int t=bbCompare(x.m__0map,y.m__0map)) return t;
  return 0;
}

void bbGCMark(const t_stdlib_collections_Map_1ii_MapKeys&t){
  bbGCMark(t.m__0map);
}

void t_stdlib_collections_Map_1ii_ValueIterator::dbEmit(t_stdlib_collections_Map_1ii_ValueIterator*p){
  bbDBEmit("_node",&p->m__0node);
}

t_stdlib_collections_Map_1ii_ValueIterator::t_stdlib_collections_Map_1ii_ValueIterator(t_stdlib_collections_Map_1ii_Node* l_node){
  bbDBFrame db_f{"new:Void(node:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_ValueIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("node",&l_node);
  bbDBStmt(819203);
  (*this).m__0node=l_node;
}
t_stdlib_collections_Map_1ii_ValueIterator::~t_stdlib_collections_Map_1ii_ValueIterator(){
}

bbBool t_stdlib_collections_Map_1ii_ValueIterator::m_Valid(){
  bbDBFrame db_f{"Valid:monkey.types.Bool()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_ValueIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(753667);
  return bbBool((*this).m__0node.get());
}

bbInt t_stdlib_collections_Map_1ii_ValueIterator::m_Current(){
  bbDBFrame db_f{"Current:monkey.types.Int()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_ValueIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(770051);
  return (*this).m__0node.get()->m__0value;
}

void t_stdlib_collections_Map_1ii_ValueIterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Bump:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_ValueIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(786435);
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_stdlib_collections_Map_1ii_ValueIterator::m_AtEnd(){
  bbDBFrame db_f{"AtEnd:monkey.types.Bool()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_ValueIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(737283);
  return ((*this).m__0node.get()==((t_stdlib_collections_Map_1ii_Node*)0));
}
bbString bbDBType(t_stdlib_collections_Map_1ii_ValueIterator*){
  return "stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.ValueIterator";
}
bbString bbDBValue(t_stdlib_collections_Map_1ii_ValueIterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_stdlib_collections_Map_1ii_ValueIterator&x,const t_stdlib_collections_Map_1ii_ValueIterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_stdlib_collections_Map_1ii_ValueIterator&t){
  bbGCMark(t.m__0node);
}

void t_stdlib_collections_Map_1ii_MapValues::dbEmit(t_stdlib_collections_Map_1ii_MapValues*p){
  bbDBEmit("_map",&p->m__0map);
}

t_stdlib_collections_Map_1ii_MapValues::t_stdlib_collections_Map_1ii_MapValues(t_stdlib_collections_Map_1ii* l_map){
  bbDBFrame db_f{"new:Void(map:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_MapValues*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("map",&l_map);
  bbDBStmt(950275);
  (*this).m__0map=l_map;
}
t_stdlib_collections_Map_1ii_MapValues::~t_stdlib_collections_Map_1ii_MapValues(){
}

t_stdlib_collections_Map_1ii_ValueIterator t_stdlib_collections_Map_1ii_MapValues::m_All(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii* t0{};
    t_stdlib_collections_Map_1ii_Node* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"All:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.ValueIterator()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii_MapValues*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(917507);
  return t_stdlib_collections_Map_1ii_ValueIterator{f0.t1=(f0.t0=(*this).m__0map.get())->m_FirstNode()};
}
bbString bbDBType(t_stdlib_collections_Map_1ii_MapValues*){
  return "stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.MapValues";
}
bbString bbDBValue(t_stdlib_collections_Map_1ii_MapValues*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_stdlib_collections_Map_1ii_MapValues&x,const t_stdlib_collections_Map_1ii_MapValues&y){
  if(int t=bbCompare(x.m__0map,y.m__0map)) return t;
  return 0;
}

void bbGCMark(const t_stdlib_collections_Map_1ii_MapValues&t){
  bbGCMark(t.m__0map);
}

void t_stdlib_collections_Map_1ii::gcMark(){
  bbGCMark(m__0root);
}

void t_stdlib_collections_Map_1ii::dbEmit(){
  puts( "[stdlib.collections.Map<monkey.types.Int,monkey.types.Int>]");
  bbDBEmit("_root",&m__0root);
}

t_stdlib_collections_Map_1ii::t_stdlib_collections_Map_1ii(t_stdlib_collections_Map_1ii_Node* l_root){
  bbDBFrame db_f{"new:Void(root:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("root",&l_root);
  bbDBStmt(1998850);
  this->m__0root=l_root;
}

t_stdlib_collections_Map_1ii::t_stdlib_collections_Map_1ii(){
  bbDBFrame db_f{"new:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
}
t_stdlib_collections_Map_1ii::~t_stdlib_collections_Map_1ii(){
}

void t_stdlib_collections_Map_1ii::m__idxeq(bbInt l_key,bbInt l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"[]=:Void(key:monkey.types.Int,value:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBStmt(1372162);
  this->m_Set(l_key,l_value);
}

bbInt t_stdlib_collections_Map_1ii::m__idx(bbInt l_key){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"[]:monkey.types.Int(key:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(1417224);
  f0.l_node=this->m_FindNode(l_key);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1421314);
  if(!bbBool(f0.l_node)){
    bbDBBlock db_blk;
    return bbInt(0);
  }
  bbDBStmt(1425410);
  return f0.l_node->m__0value;
}

t_stdlib_collections_Map_1ii_MapValues t_stdlib_collections_Map_1ii::m_Values(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Values:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.MapValues()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1101826);
  return t_stdlib_collections_Map_1ii_MapValues{this};
}

bbBool t_stdlib_collections_Map_1ii::m_Update(bbInt l_key,bbInt l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"Update:monkey.types.Bool(key:monkey.types.Int,value:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBStmt(1843208);
  f0.l_node=this->m_FindNode(l_key);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1847298);
  if(!bbBool(f0.l_node)){
    bbDBBlock db_blk;
    return false;
  }
  bbDBStmt(1851394);
  f0.l_node->m__0value=l_value;
  bbDBStmt(1855490);
  return true;
}

bbBool t_stdlib_collections_Map_1ii::m_Set(bbInt l_key,bbInt l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    t_stdlib_collections_Map_1ii_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  bbDBFrame db_f{"Set:monkey.types.Bool(key:monkey.types.Int,value:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBStmt(1495042);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    bbDBStmt(1499139);
    this->m__0root=bbGCNew<t_stdlib_collections_Map_1ii_Node>(l_key,l_value,t_stdlib_collections_Map_1ii_Node_Color(0),((t_stdlib_collections_Map_1ii_Node*)0));
    bbDBStmt(1503235);
    return true;
  }
  bbDBStmt(1515528);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBLocal("parent",&f0.l_parent);
  bbInt l_cmp{};
  bbDBLocal("cmp",&l_cmp);
  bbDBStmt(1523714);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node)){
      bbDBBlock db_blk;
      bbDBStmt(1527811);
      f0.l_parent=f0.l_node;
      bbDBStmt(1531907);
      l_cmp=bbCompare(l_key,f0.l_node->m__0key);
      bbDBStmt(1536003);
      if((l_cmp>bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(1540100);
        f0.l_node=f0.l_node->m__0right.get();
      }else if(bbDBStmt(1544195),(l_cmp<bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(1548292);
        f0.l_node=f0.l_node->m__0left.get();
      }else{
        bbDBStmt(1552387);
        bbDBBlock db_blk;
        bbDBStmt(1556484);
        f0.l_node->m__0value=l_value;
        bbDBStmt(1560580);
        return false;
      }
    }
  }
  bbDBStmt(1576962);
  f0.l_node=bbGCNew<t_stdlib_collections_Map_1ii_Node>(l_key,l_value,t_stdlib_collections_Map_1ii_Node_Color(0),f0.l_parent);
  bbDBStmt(1585154);
  if((l_cmp>bbInt(0))){
    bbDBBlock db_blk;
    f0.l_parent->m__0right=f0.l_node;
  }else{
    bbDBBlock db_blk;
    f0.l_parent->m__0left=f0.l_node;
  }
  bbDBStmt(1593346);
  this->m_InsertFixup(f0.l_node);
  bbDBStmt(1601538);
  return true;
}

void t_stdlib_collections_Map_1ii::m_RotateRight(t_stdlib_collections_Map_1ii_Node* l_node){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_child{};
    void gcMark(){
      bbGCMark(l_child);
    }
  }f0{};
  bbDBFrame db_f{"RotateRight:Void(node:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&l_node);
  bbDBStmt(2408456);
  f0.l_child=l_node->m__0left.get();
  bbDBLocal("child",&f0.l_child);
  bbDBStmt(2412546);
  l_node->m__0left=f0.l_child->m__0right.get();
  bbDBStmt(2416642);
  if(bbBool(f0.l_child->m__0right.get())){
    bbDBBlock db_blk;
    bbDBStmt(2420739);
    f0.l_child->m__0right.get()->m__0parent=l_node;
  }
  bbDBStmt(2428930);
  f0.l_child->m__0parent=l_node->m__0parent.get();
  bbDBStmt(2433026);
  if(bbBool(l_node->m__0parent.get())){
    bbDBBlock db_blk;
    bbDBStmt(2437123);
    if((l_node==l_node->m__0parent.get()->m__0right.get())){
      bbDBBlock db_blk;
      bbDBStmt(2441220);
      l_node->m__0parent.get()->m__0right=f0.l_child;
    }else{
      bbDBStmt(2445315);
      bbDBBlock db_blk;
      bbDBStmt(2449412);
      l_node->m__0parent.get()->m__0left=f0.l_child;
    }
  }else{
    bbDBStmt(2457602);
    bbDBBlock db_blk;
    bbDBStmt(2461699);
    this->m__0root=f0.l_child;
  }
  bbDBStmt(2469890);
  f0.l_child->m__0right=l_node;
  bbDBStmt(2473986);
  l_node->m__0parent=f0.l_child;
}

void t_stdlib_collections_Map_1ii::m_RotateLeft(t_stdlib_collections_Map_1ii_Node* l_node){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_child{};
    void gcMark(){
      bbGCMark(l_child);
    }
  }f0{};
  bbDBFrame db_f{"RotateLeft:Void(node:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&l_node);
  bbDBStmt(2326536);
  f0.l_child=l_node->m__0right.get();
  bbDBLocal("child",&f0.l_child);
  bbDBStmt(2330626);
  l_node->m__0right=f0.l_child->m__0left.get();
  bbDBStmt(2334722);
  if(bbBool(f0.l_child->m__0left.get())){
    bbDBBlock db_blk;
    bbDBStmt(2338819);
    f0.l_child->m__0left.get()->m__0parent=l_node;
  }
  bbDBStmt(2347010);
  f0.l_child->m__0parent=l_node->m__0parent.get();
  bbDBStmt(2351106);
  if(bbBool(l_node->m__0parent.get())){
    bbDBBlock db_blk;
    bbDBStmt(2355203);
    if((l_node==l_node->m__0parent.get()->m__0left.get())){
      bbDBBlock db_blk;
      bbDBStmt(2359300);
      l_node->m__0parent.get()->m__0left=f0.l_child;
    }else{
      bbDBStmt(2363395);
      bbDBBlock db_blk;
      bbDBStmt(2367492);
      l_node->m__0parent.get()->m__0right=f0.l_child;
    }
  }else{
    bbDBStmt(2375682);
    bbDBBlock db_blk;
    bbDBStmt(2379779);
    this->m__0root=f0.l_child;
  }
  bbDBStmt(2387970);
  f0.l_child->m__0left=l_node;
  bbDBStmt(2392066);
  l_node->m__0parent=f0.l_child;
}

void t_stdlib_collections_Map_1ii::m_RemoveNode(t_stdlib_collections_Map_1ii_Node* l_node){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_child{};
    t_stdlib_collections_Map_1ii_Node* l_parent{};
    t_stdlib_collections_Map_1ii_Node* l_splice{};
    void gcMark(){
      bbGCMark(l_child);
      bbGCMark(l_parent);
      bbGCMark(l_splice);
    }
  }f0{};
  bbDBFrame db_f{"RemoveNode:Void(node:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&l_node);
  bbDBStmt(2158600);
  bbDBLocal("splice",&f0.l_splice);
  bbDBLocal("child",&f0.l_child);
  bbDBStmt(2166786);
  if(!bbBool(l_node->m__0left.get())){
    bbDBBlock db_blk;
    bbDBStmt(2170883);
    f0.l_splice=l_node;
    bbDBStmt(2174979);
    f0.l_child=l_node->m__0right.get();
  }else if(bbDBStmt(2179074),!bbBool(l_node->m__0right.get())){
    bbDBBlock db_blk;
    bbDBStmt(2183171);
    f0.l_splice=l_node;
    bbDBStmt(2187267);
    f0.l_child=l_node->m__0left.get();
  }else{
    bbDBStmt(2191362);
    bbDBBlock db_blk;
    bbDBStmt(2195459);
    f0.l_splice=l_node->m__0left.get();
    bbDBStmt(2199555);
    {
      bbDBLoop db_loop;
      while(bbBool(f0.l_splice->m__0right.get())){
        bbDBBlock db_blk;
        bbDBStmt(2203652);
        f0.l_splice=f0.l_splice->m__0right.get();
      }
    }
    bbDBStmt(2211843);
    f0.l_child=f0.l_splice->m__0left.get();
    bbDBStmt(2215939);
    l_node->m__0key=f0.l_splice->m__0key;
    bbDBStmt(2220035);
    l_node->m__0value=f0.l_splice->m__0value;
  }
  bbDBStmt(2232328);
  f0.l_parent=f0.l_splice->m__0parent.get();
  bbDBLocal("parent",&f0.l_parent);
  bbDBStmt(2240514);
  if(bbBool(f0.l_child)){
    bbDBBlock db_blk;
    bbDBStmt(2244611);
    f0.l_child->m__0parent=f0.l_parent;
  }
  bbDBStmt(2256898);
  if(!bbBool(f0.l_parent)){
    bbDBBlock db_blk;
    bbDBStmt(2260995);
    this->m__0root=f0.l_child;
    bbDBStmt(2265091);
    return;
  }
  bbDBStmt(2277378);
  if((f0.l_splice==f0.l_parent->m__0left.get())){
    bbDBBlock db_blk;
    bbDBStmt(2281475);
    f0.l_parent->m__0left=f0.l_child;
  }else{
    bbDBStmt(2285570);
    bbDBBlock db_blk;
    bbDBStmt(2289667);
    f0.l_parent->m__0right=f0.l_child;
  }
  bbDBStmt(2301954);
  if((f0.l_splice->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1))){
    bbDBBlock db_blk;
    bbDBStmt(2306051);
    this->m_DeleteFixup(f0.l_child,f0.l_parent);
  }
}

bbBool t_stdlib_collections_Map_1ii::m_Remove(bbInt l_key){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"Remove:monkey.types.Bool(key:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(1953800);
  f0.l_node=this->m_FindNode(l_key);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1957890);
  if(!bbBool(f0.l_node)){
    bbDBBlock db_blk;
    return false;
  }
  bbDBStmt(1961986);
  this->m_RemoveNode(f0.l_node);
  bbDBStmt(1966082);
  return true;
}

t_stdlib_collections_Map_1ii_Node* t_stdlib_collections_Map_1ii::m_LastNode(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"LastNode:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(2056194);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    return ((t_stdlib_collections_Map_1ii_Node*)0);
  }
  bbDBStmt(2064392);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(2068482);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node->m__0right.get())){
      bbDBBlock db_blk;
      bbDBStmt(2072579);
      f0.l_node=f0.l_node->m__0right.get();
    }
  }
  bbDBStmt(2080770);
  return f0.l_node;
}

t_stdlib_collections_Map_1ii_MapKeys t_stdlib_collections_Map_1ii::m_Keys(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Keys:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.MapKeys()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1056770);
  return t_stdlib_collections_Map_1ii_MapKeys{this};
}

void t_stdlib_collections_Map_1ii::m_InsertFixup(t_stdlib_collections_Map_1ii_Node* l_node){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    f0_t(t_stdlib_collections_Map_1ii_Node* l_node):l_node(l_node){
    }
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{l_node};
  bbDBFrame db_f{"InsertFixup:Void(node:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(2490370);
  {
    bbDBLoop db_loop;
    while(((bbBool(f0.l_node->m__0parent.get())&&(f0.l_node->m__0parent.get()->m__0color==t_stdlib_collections_Map_1ii_Node_Color(0)))&&bbBool(f0.l_node->m__0parent.get()->m__0parent.get()))){
      bbDBBlock db_blk;
      bbDBStmt(2494467);
      if((f0.l_node->m__0parent.get()==f0.l_node->m__0parent.get()->m__0parent.get()->m__0left.get())){
        struct f2_t : public bbGCFrame{
          t_stdlib_collections_Map_1ii_Node* l_uncle{};
          void gcMark(){
            bbGCMark(l_uncle);
          }
        }f2{};
        bbDBBlock db_blk;
        bbDBStmt(2498570);
        f2.l_uncle=f0.l_node->m__0parent.get()->m__0parent.get()->m__0right.get();
        bbDBLocal("uncle",&f2.l_uncle);
        bbDBStmt(2502660);
        if((bbBool(f2.l_uncle)&&(f2.l_uncle->m__0color==t_stdlib_collections_Map_1ii_Node_Color(0)))){
          bbDBBlock db_blk;
          bbDBStmt(2506757);
          f0.l_node->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
          bbDBStmt(2510853);
          f2.l_uncle->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
          bbDBStmt(2514949);
          f2.l_uncle->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
          bbDBStmt(2519045);
          f0.l_node=f2.l_uncle->m__0parent.get();
        }else{
          bbDBStmt(2523140);
          struct f3_t : public bbGCFrame{
            t_stdlib_collections_Map_1ii_Node* t0{};
            void gcMark(){
              bbGCMark(t0);
            }
          }f3{};
          bbDBBlock db_blk;
          bbDBStmt(2527237);
          if((f0.l_node==f0.l_node->m__0parent.get()->m__0right.get())){
            bbDBBlock db_blk;
            bbDBStmt(2531334);
            f0.l_node=f0.l_node->m__0parent.get();
            bbDBStmt(2535430);
            this->m_RotateLeft(f0.l_node);
          }
          bbDBStmt(2543621);
          f0.l_node->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
          bbDBStmt(2547717);
          f0.l_node->m__0parent.get()->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
          bbDBStmt(2551813);
          this->m_RotateRight(f3.t0=f0.l_node->m__0parent.get()->m__0parent.get());
        }
      }else{
        bbDBStmt(2560003);
        struct f2_t : public bbGCFrame{
          t_stdlib_collections_Map_1ii_Node* l_uncle{};
          void gcMark(){
            bbGCMark(l_uncle);
          }
        }f2{};
        bbDBBlock db_blk;
        bbDBStmt(2564106);
        f2.l_uncle=f0.l_node->m__0parent.get()->m__0parent.get()->m__0left.get();
        bbDBLocal("uncle",&f2.l_uncle);
        bbDBStmt(2568196);
        if((bbBool(f2.l_uncle)&&(f2.l_uncle->m__0color==t_stdlib_collections_Map_1ii_Node_Color(0)))){
          bbDBBlock db_blk;
          bbDBStmt(2572293);
          f0.l_node->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
          bbDBStmt(2576389);
          f2.l_uncle->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
          bbDBStmt(2580485);
          f2.l_uncle->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
          bbDBStmt(2584581);
          f0.l_node=f2.l_uncle->m__0parent.get();
        }else{
          bbDBStmt(2588676);
          struct f3_t : public bbGCFrame{
            t_stdlib_collections_Map_1ii_Node* t0{};
            void gcMark(){
              bbGCMark(t0);
            }
          }f3{};
          bbDBBlock db_blk;
          bbDBStmt(2592773);
          if((f0.l_node==f0.l_node->m__0parent.get()->m__0left.get())){
            bbDBBlock db_blk;
            bbDBStmt(2596870);
            f0.l_node=f0.l_node->m__0parent.get();
            bbDBStmt(2600966);
            this->m_RotateRight(f0.l_node);
          }
          bbDBStmt(2609157);
          f0.l_node->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
          bbDBStmt(2613253);
          f0.l_node->m__0parent.get()->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
          bbDBStmt(2617349);
          this->m_RotateLeft(f3.t0=f0.l_node->m__0parent.get()->m__0parent.get());
        }
      }
    }
  }
  bbDBStmt(2633730);
  this->m__0root.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
}

bbInt t_stdlib_collections_Map_1ii::m_Get(bbInt l_key){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"Get:monkey.types.Int(key:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(1900552);
  f0.l_node=this->m_FindNode(l_key);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1904642);
  if(bbBool(f0.l_node)){
    bbDBBlock db_blk;
    return f0.l_node->m__0value;
  }
  bbDBStmt(1908738);
  return bbInt(0);
}

t_stdlib_collections_Map_1ii_Node* t_stdlib_collections_Map_1ii::m_FirstNode(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"FirstNode:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(2015234);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    return ((t_stdlib_collections_Map_1ii_Node*)0);
  }
  bbDBStmt(2023432);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(2027522);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node->m__0left.get())){
      bbDBBlock db_blk;
      bbDBStmt(2031619);
      f0.l_node=f0.l_node->m__0left.get();
    }
  }
  bbDBStmt(2039810);
  return f0.l_node;
}

t_stdlib_collections_Map_1ii_Node* t_stdlib_collections_Map_1ii::m_FindNode(bbInt l_key){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"FindNode:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node(key:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(2097160);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(2101250);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node)){
      bbDBBlock db_blk;
      bbDBStmt(2105353);
      bbInt l_cmp=bbCompare(l_key,f0.l_node->m__0key);
      bbDBLocal("cmp",&l_cmp);
      bbDBStmt(2109443);
      if((l_cmp>bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(2113540);
        f0.l_node=f0.l_node->m__0right.get();
      }else if(bbDBStmt(2117635),(l_cmp<bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(2121732);
        f0.l_node=f0.l_node->m__0left.get();
      }else{
        bbDBStmt(2125827);
        bbDBBlock db_blk;
        bbDBStmt(2129924);
        return f0.l_node;
      }
    }
  }
  bbDBStmt(2142210);
  return ((t_stdlib_collections_Map_1ii_Node*)0);
}

bbBool t_stdlib_collections_Map_1ii::m_Empty(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Empty:monkey.types.Bool()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1249282);
  return (this->m__0root.get()==((t_stdlib_collections_Map_1ii_Node*)0));
}

void t_stdlib_collections_Map_1ii::m_DeleteFixup(t_stdlib_collections_Map_1ii_Node* l_node,t_stdlib_collections_Map_1ii_Node* l_parent){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    t_stdlib_collections_Map_1ii_Node* l_parent{};
    f0_t(t_stdlib_collections_Map_1ii_Node* l_node,t_stdlib_collections_Map_1ii_Node* l_parent):l_node(l_node),l_parent(l_parent){
    }
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{l_node,l_parent};
  bbDBFrame db_f{"DeleteFixup:Void(node:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node,parent:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&f0.l_node);
  bbDBLocal("parent",&f0.l_parent);
  bbDBStmt(2654210);
  {
    bbDBLoop db_loop;
    while(((f0.l_node!=this->m__0root.get())&&(!bbBool(f0.l_node)||(f0.l_node->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1))))){
      bbDBBlock db_blk;
      bbDBStmt(2662403);
      if((f0.l_node==f0.l_parent->m__0left.get())){
        struct f2_t : public bbGCFrame{
          t_stdlib_collections_Map_1ii_Node* l_sib{};
          void gcMark(){
            bbGCMark(l_sib);
          }
        }f2{};
        bbDBBlock db_blk;
        bbDBStmt(2670602);
        f2.l_sib=f0.l_parent->m__0right.get();
        bbDBLocal("sib",&f2.l_sib);
        bbDBStmt(2678788);
        if((f2.l_sib->m__0color==t_stdlib_collections_Map_1ii_Node_Color(0))){
          bbDBBlock db_blk;
          bbDBStmt(2682885);
          f2.l_sib->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
          bbDBStmt(2686981);
          f0.l_parent->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
          bbDBStmt(2691077);
          this->m_RotateLeft(f0.l_parent);
          bbDBStmt(2695173);
          f2.l_sib=f0.l_parent->m__0right.get();
        }
        bbDBStmt(2707460);
        if(((!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1)))&&(!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1))))){
          bbDBBlock db_blk;
          bbDBStmt(2711557);
          f2.l_sib->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
          bbDBStmt(2715653);
          f0.l_node=f0.l_parent;
          bbDBStmt(2719749);
          f0.l_parent=f0.l_parent->m__0parent.get();
        }else{
          bbDBStmt(2723844);
          bbDBBlock db_blk;
          bbDBStmt(2727941);
          if((!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1)))){
            bbDBBlock db_blk;
            bbDBStmt(2732038);
            f2.l_sib->m__0left.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
            bbDBStmt(2736134);
            f2.l_sib->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
            bbDBStmt(2740230);
            this->m_RotateRight(f2.l_sib);
            bbDBStmt(2744326);
            f2.l_sib=f0.l_parent->m__0right.get();
          }
          bbDBStmt(2752517);
          f2.l_sib->m__0color=f0.l_parent->m__0color;
          bbDBStmt(2756613);
          f0.l_parent->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
          bbDBStmt(2760709);
          f2.l_sib->m__0right.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
          bbDBStmt(2764805);
          this->m_RotateLeft(f0.l_parent);
          bbDBStmt(2768901);
          f0.l_node=this->m__0root.get();
        }
      }else{
        bbDBStmt(2777091);
        struct f2_t : public bbGCFrame{
          t_stdlib_collections_Map_1ii_Node* l_sib{};
          void gcMark(){
            bbGCMark(l_sib);
          }
        }f2{};
        bbDBBlock db_blk;
        bbDBStmt(2781194);
        f2.l_sib=f0.l_parent->m__0left.get();
        bbDBLocal("sib",&f2.l_sib);
        bbDBStmt(2789380);
        if((f2.l_sib->m__0color==t_stdlib_collections_Map_1ii_Node_Color(0))){
          bbDBBlock db_blk;
          bbDBStmt(2793477);
          f2.l_sib->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
          bbDBStmt(2797573);
          f0.l_parent->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
          bbDBStmt(2801669);
          this->m_RotateRight(f0.l_parent);
          bbDBStmt(2805765);
          f2.l_sib=f0.l_parent->m__0left.get();
        }
        bbDBStmt(2818052);
        if(((!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1)))&&(!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1))))){
          bbDBBlock db_blk;
          bbDBStmt(2822149);
          f2.l_sib->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
          bbDBStmt(2826245);
          f0.l_node=f0.l_parent;
          bbDBStmt(2830341);
          f0.l_parent=f0.l_parent->m__0parent.get();
        }else{
          bbDBStmt(2834436);
          bbDBBlock db_blk;
          bbDBStmt(2838533);
          if((!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1)))){
            bbDBBlock db_blk;
            bbDBStmt(2842630);
            f2.l_sib->m__0right.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
            bbDBStmt(2846726);
            f2.l_sib->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
            bbDBStmt(2850822);
            this->m_RotateLeft(f2.l_sib);
            bbDBStmt(2854918);
            f2.l_sib=f0.l_parent->m__0left.get();
          }
          bbDBStmt(2863109);
          f2.l_sib->m__0color=f0.l_parent->m__0color;
          bbDBStmt(2867205);
          f0.l_parent->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
          bbDBStmt(2871301);
          f2.l_sib->m__0left.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
          bbDBStmt(2875397);
          this->m_RotateRight(f0.l_parent);
          bbDBStmt(2879493);
          f0.l_node=this->m__0root.get();
        }
      }
    }
  }
  bbDBStmt(2895874);
  if(bbBool(f0.l_node)){
    bbDBBlock db_blk;
    f0.l_node->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
  }
}

bbInt t_stdlib_collections_Map_1ii::m_Count(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Count:monkey.types.Int()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1208322);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    return bbInt(0);
  }
  bbDBStmt(1212418);
  return (f0.t0=this->m__0root.get())->m_Count(bbInt(0));
}

t_stdlib_collections_Map_1ii* t_stdlib_collections_Map_1ii::m_Copy(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_root{};
    void gcMark(){
      bbGCMark(l_root);
    }
  }f0{};
  bbDBFrame db_f{"Copy:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1138696);
  bbDBLocal("root",&f0.l_root);
  bbDBStmt(1142786);
  if(bbBool(this->m__0root.get())){
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    f0.l_root=(f1.t0=this->m__0root.get())->m_Copy(((t_stdlib_collections_Map_1ii_Node*)0));
  }
  bbDBStmt(1146882);
  return bbGCNew<t_stdlib_collections_Map_1ii>(f0.l_root);
}

bbBool t_stdlib_collections_Map_1ii::m_Contains(bbInt l_key){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Contains:monkey.types.Bool(key:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(1294338);
  return (this->m_FindNode(l_key)!=((t_stdlib_collections_Map_1ii_Node*)0));
}

void t_stdlib_collections_Map_1ii::m_Clear(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Clear:Void()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1171458);
  this->m__0root=((t_stdlib_collections_Map_1ii_Node*)0);
}

t_stdlib_collections_Map_1ii_Iterator t_stdlib_collections_Map_1ii::m_All(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"All:stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Iterator()","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1011714);
  return t_stdlib_collections_Map_1ii_Iterator{f0.t0=this->m_FirstNode()};
}

bbBool t_stdlib_collections_Map_1ii::m_Add(bbInt l_key,bbInt l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    t_stdlib_collections_Map_1ii_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  bbDBFrame db_f{"Add:monkey.types.Bool(key:monkey.types.Int,value:monkey.types.Int)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/stdlib/collections/map.monkey2"};
  t_stdlib_collections_Map_1ii*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBStmt(1671170);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    bbDBStmt(1675267);
    this->m__0root=bbGCNew<t_stdlib_collections_Map_1ii_Node>(l_key,l_value,t_stdlib_collections_Map_1ii_Node_Color(0),((t_stdlib_collections_Map_1ii_Node*)0));
    bbDBStmt(1679363);
    return true;
  }
  bbDBStmt(1691656);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBLocal("parent",&f0.l_parent);
  bbInt l_cmp{};
  bbDBLocal("cmp",&l_cmp);
  bbDBStmt(1699842);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node)){
      bbDBBlock db_blk;
      bbDBStmt(1703939);
      f0.l_parent=f0.l_node;
      bbDBStmt(1708035);
      l_cmp=bbCompare(l_key,f0.l_node->m__0key);
      bbDBStmt(1712131);
      if((l_cmp>bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(1716228);
        f0.l_node=f0.l_node->m__0right.get();
      }else if(bbDBStmt(1720323),(l_cmp<bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(1724420);
        f0.l_node=f0.l_node->m__0left.get();
      }else{
        bbDBStmt(1728515);
        bbDBBlock db_blk;
        bbDBStmt(1732612);
        return false;
      }
    }
  }
  bbDBStmt(1748994);
  f0.l_node=bbGCNew<t_stdlib_collections_Map_1ii_Node>(l_key,l_value,t_stdlib_collections_Map_1ii_Node_Color(0),f0.l_parent);
  bbDBStmt(1757186);
  if((l_cmp>bbInt(0))){
    bbDBBlock db_blk;
    f0.l_parent->m__0right=f0.l_node;
  }else{
    bbDBBlock db_blk;
    f0.l_parent->m__0left=f0.l_node;
  }
  bbDBStmt(1765378);
  this->m_InsertFixup(f0.l_node);
  bbDBStmt(1773570);
  return true;
}
bbString bbDBType(t_stdlib_collections_Map_1ii**){
  return "stdlib.collections.Map<monkey.types.Int,monkey.types.Int>";
}
bbString bbDBValue(t_stdlib_collections_Map_1ii**p){
  return bbDBObjectValue(*p);
}

void mx2_sdk_stdlib_collections_2map_init_f(){
}
