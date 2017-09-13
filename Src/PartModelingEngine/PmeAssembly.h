#pragma once

#include <vector>
#include ".\PmeObject.h"

class PmeComponent;
class PmeStdAssemblyConstraint;
class PmeStdAssemblyConstraints;

class PmeAssembly
	: public PmeObject
{
	typedef std::vector<PmeComponent *> ComponentList;

	PME_DECLARE_RUNTIME_TYPE(PmeAssembly)
public:
	PmeAssembly(void);
	virtual ~PmeAssembly(void);

	void SetName( CString name ) { m_name = name; }
	CString GetName( void ) const { return m_name; }

	void UpdateAll(void);

	void AddComponent(PmeComponent * pComponent);
	
	ComponentList GetComponentList() {return m_components;};
	PmeComponent * GetComponent(int i) {return m_components[i];};

	PmeStdAssemblyConstraints * GetConstraints(void) const { return m_pConstraints; }

private:
	CString m_name;
	ComponentList m_components;	// first nodes of component
	PmeStdAssemblyConstraints * m_pConstraints;
};
