import Header from '../components/Header'
import Meta from '../components/Meta'
import ScheduleTable from '../components/ScheduleTable'
const Scheduling = () => {
// page content
  const pageTitle = 'Scheduling'
  const pageDescription = 'welcome to react bootstrap template'

  return (
    <div>
      <Meta title={pageTitle}/>
      <Header head={pageTitle} description={pageDescription} />
      <ScheduleTable />
    </div>
  )
}

export default Scheduling