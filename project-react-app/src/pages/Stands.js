import Header from '../components/Header'
import Meta from '../components/Meta'
import StandTable from '../components/StandTable'
const Stands = () => {
// page content
  const pageTitle = 'Concession Stand Items'
  const pageDescription = 'welcome to react bootstrap template'

  return (
    <div>
      <Meta title={pageTitle}/>
      <Header head={pageTitle} description={pageDescription} />
      <StandTable />
    </div>
  )
}

export default Stands