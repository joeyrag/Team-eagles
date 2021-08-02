import Header from '../components/Header'
import Meta from '../components/Meta'
import RoomsTable from '../components/RoomsTable'
const Rooms = () => {
// page content
  const pageTitle = 'Rooms'
  const pageDescription = 'Manage the theater rooms here. Click any cell to edit.'

  return (
    <div>
      <Meta title={pageTitle}/>
      <Header head={pageTitle} description={pageDescription} />
      <RoomsTable />
    </div>
  )
}

export default Rooms