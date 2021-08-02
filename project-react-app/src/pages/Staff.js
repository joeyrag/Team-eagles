import Header from '../components/Header'
import Meta from '../components/Meta'
import StaffTable from '../components/StaffTable'

const Staff = () => {
// page content
  const pageTitle = 'Staff'
  const pageDescription = 'Manage your Employee details here. CLick any cell to edit.'

  return (
    <div>
      <Meta title={pageTitle}/>
      <Header head={pageTitle} description={pageDescription} />
      <StaffTable />
    </div>
  )
}

export default Staff