#pragma once

#include <set>
#include "Procedure.h"
#include "TNode.h"

using namespace std;

/* ----------------------------- */
/* -------- CONSTRUCTORS ------- */
/* ----------------------------- */
// empty contructor (null attributes)
Procedure::Procedure() {}

Procedure::Procedure(const string &name) {
	procName = name;
}

Procedure::Procedure(const string &name, TNode *tRef) {
	procName = name;
	TNodeRef = tRef;
}


/* ----------------------------- */
/* ---------- GETTERS ---------- */
/* ----------------------------- */
// get name of proc
string* Procedure::getProcName() {
	return &procName;
}

// get reference to proc TNode
TNode* Procedure::getTNodeRef() {
	return TNodeRef;
}

// get set of variables proc uses
const Procedure::UsesSet& Procedure::getUses() {
	return uses;
}

// get set of variables proc modifies
const Procedure::ModifiesSet& Procedure::getModifies() {
	return modifies;
}

// get set of procs this proc calls
const Procedure::CallsSet& Procedure::getCalls() {
	return calls;
}

// get set of procs that call this proc
const Procedure::CalledBySet& Procedure::getCalledBy() {
	return calledBy;
}


/* ----------------------------- */
/* ---------- SETTERS ---------- */
/* ----------------------------- */
void Procedure::setProcName(const string &name) {
	procName = name;
}

void Procedure::setTNodeRef(TNode *ref) {
	TNodeRef = ref;
}

void Procedure::setUses(const set<string> &useSet) {
	uses = useSet;
}

void Procedure::setModifies(const set<string> &modifiesSet) {
	modifies = modifiesSet;
}

void Procedure::setCalls(const set<Procedure*> &callsSet) {
	calls = callsSet;
}

void Procedure::setCalledBy(const set<Procedure*> &calledBySet) {
	calledBy = calledBySet;
}